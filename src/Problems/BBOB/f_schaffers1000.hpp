/// \file f_Schaffers1000.hpp
/// \brief cpp file for class Schaffers1000.
///
/// A detailed file description.
/// Refer "https://github.com/numbbo/coco/blob/master/code-experiments/src/f_schaffers.c"
///
/// \author Furong Ye
/// \date 2019-09-12
#ifndef _F_SCHAFFERSTHOUSAND_HPP
#define _F_SCHAFFERSTHOUSAND_HPP

#include "../../Template/IOHprofiler_problem.hpp"
#include "bbob_common_used_functions/coco_transformation.h"

class Schaffers1000 : public IOHprofiler_problem<double> {
public:
  Schaffers1000() {
    IOHprofiler_set_problem_name("Schaffers1000");
    IOHprofiler_set_problem_type("bbob");
    IOHprofiler_set_number_of_objectives(1);
    IOHprofiler_set_lowerbound(-5.0);
    IOHprofiler_set_upperbound(5.0);
    IOHprofiler_set_best_variables(0);
    IOHprofiler_set_as_minimization();
  }
  Schaffers1000(int instance_id, int dimension) {
    IOHprofiler_set_instance_id(instance_id);
    IOHprofiler_set_problem_name("Schaffers1000");
    IOHprofiler_set_problem_type("bbob");
    IOHprofiler_set_number_of_objectives(1);
    IOHprofiler_set_lowerbound(-5.0);
    IOHprofiler_set_upperbound(5.0);
    IOHprofiler_set_best_variables(0);
    Initilize_problem(dimension);
    IOHprofiler_set_as_minimization();
  }
  ~Schaffers1000() {};

  void Initilize_problem(int dimension) {
    IOHprofiler_set_number_of_variables(dimension);
  };


  const double conditioning = 1000;
  void prepare_problem() {
    std::vector<double> xopt;
    double fopt;
    std::vector<std::vector<double>> M;
    std::vector<std::vector<double>> M1;
    std::vector<double> b;
    std::vector<double> b1;
    /* compute xopt, fopt*/
    
    int n = this->IOHprofiler_get_number_of_variables();
    const long rseed = (long) (17 + 10000 * this->IOHprofiler_get_instance_id());
    bbob2009_compute_xopt(xopt, rseed, n);
    fopt = bbob2009_compute_fopt(18, this->IOHprofiler_get_instance_id());
    
    /* compute M and b */
    M = std::vector<std::vector<double>> (n);
    M1 = std::vector<std::vector<double>> (n);
    for (int i = 0; i != n; i++) {
      M[i] = std::vector<double> (n);
      M1[i] = std::vector<double> (n);
    }
    b = std::vector<double> (n);
    b1 = std::vector<double> (n);
    std::vector<std::vector<double>> rot1;
    std::vector<std::vector<double>> rot2;
    bbob2009_compute_rotation(rot1, rseed + 1000000, n);
    bbob2009_compute_rotation(rot2, rseed, n);
    for (int i = 0; i < n; ++i) {
      b[i] = 0.0;
      for (int j = 0; j < n; ++j) {
        double exponent = 1.0 * (int) i / ((double) (long) n - 1.0);
        M[i][j] = rot2[i][j] * pow(sqrt(conditioning), exponent);
      }
    }
    bbob2009_copy_rotation_matrix(rot1,M1,b1,n);

    Coco_Transformation_Data::fopt = fopt;
    Coco_Transformation_Data::xopt = xopt;
    Coco_Transformation_Data::M = M;
    Coco_Transformation_Data::b = b;
    Coco_Transformation_Data::M1 = M1;
    Coco_Transformation_Data::b1 = b1;
    Coco_Transformation_Data::penalty_factor = 10.0;
  }

  double internal_evaluate(const std::vector<double> &x) {
    int n = x.size();
    size_t i = 0;
    std::vector<double> result(1);

    /* Computation core */
    result[0] = 0.0;
    for (i = 0; i < n - 1; ++i) {
      const double tmp = x[i] * x[i] + x[i + 1] * x[i + 1];
      if (isinf(tmp) && isnan(sin(50.0 * pow(tmp, 0.1))))  /* sin(inf) -> nan */
        /* the second condition is necessary to pass the integration tests under Windows and Linux */
        return tmp;
      result[0] += pow(tmp, 0.25) * (1.0 + pow(sin(50.0 * pow(tmp, 0.1)), 2.0));
    }
    result[0] = pow(result[0] / ((double) (long) n - 1.0), 2.0);

    return result[0];
  };
  
  static Schaffers1000 * createInstance() {
    return new Schaffers1000();
  };

  static Schaffers1000 * createInstance(int instance_id, int dimension) {
    return new Schaffers1000(instance_id, dimension);
  };
};

#endif