/// \file f_leading_ones_ruggedness1.hpp
/// \brief cpp file for class f_leading_ones_ruggedness1.
///
/// A detailed file description.
///
/// \author Furong Ye
/// \date 2019-06-27
#ifndef _F_LEADING_ONES_RUGGEDNESSONE_H
#define _F_LEADING_ONES_RUGGEDNESSONE_H

#include "../Template/IOHprofiler_problem.hpp"
#include "common_used_functions/wmodels.hpp"

class LeadingOnes_Ruggedness1 : public IOHprofiler_problem<int> {
public:
   LeadingOnes_Ruggedness1() {


    IOHprofiler_set_problem_name("LeadingOnes_Ruggedness1");
    IOHprofiler_set_problem_type("pseudo_Boolean_problem");
    IOHprofiler_set_number_of_objectives(1);
    IOHprofiler_set_lowerbound(0);
    IOHprofiler_set_upperbound(1);
    IOHprofiler_set_best_variables(1);
  }

  LeadingOnes_Ruggedness1(int instance_id, int dimension) {

    IOHprofiler_set_instance_id(instance_id);
    IOHprofiler_set_problem_name("LeadingOnes_Ruggedness1");
    IOHprofiler_set_problem_type("pseudo_Boolean_problem");
    IOHprofiler_set_number_of_objectives(1);
    IOHprofiler_set_lowerbound(0);
    IOHprofiler_set_upperbound(1);
    IOHprofiler_set_best_variables(1);
    Initilize_problem(dimension);
  }
  
  ~LeadingOnes_Ruggedness1() {};

  void Initilize_problem(int dimension) {
    IOHprofiler_set_number_of_variables(dimension);

  };

  std::vector<double> internal_evaluate(std::vector<int> x) {
    std::vector<double> y;
    int n = x.size();
    int result = 0;
    for (int i = 0; i != n; ++i) {
      if (x[i] == 1) {
        result = i + 1;
      } else {
        break;
      }
    }
    result = ruggedness1(result,n);
    y.push_back(result);
    return y;
  };

  static LeadingOnes_Ruggedness1 * createInstance() {
    return new LeadingOnes_Ruggedness1();
  };

  static LeadingOnes_Ruggedness1 * createInstance(int instance_id, int dimension) {
    return new LeadingOnes_Ruggedness1(instance_id, dimension);
  };
};

#endif