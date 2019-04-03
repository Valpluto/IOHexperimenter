// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_init_suite
void c_init_suite(String functions, String dimensions, String instances);
RcppExport SEXP _IOHexperimenter_c_init_suite(SEXP functionsSEXP, SEXP dimensionsSEXP, SEXP instancesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type functions(functionsSEXP);
    Rcpp::traits::input_parameter< String >::type dimensions(dimensionsSEXP);
    Rcpp::traits::input_parameter< String >::type instances(instancesSEXP);
    c_init_suite(functions, dimensions, instances);
    return R_NilValue;
END_RCPP
}
// c_init_observer
void c_init_observer(String result_folder, String algorithm_name, String algorithm_info, String complete_triggers, int number_interval_triggers, String base_evaluation_triggers, int number_target_triggers, String parameters_name);
RcppExport SEXP _IOHexperimenter_c_init_observer(SEXP result_folderSEXP, SEXP algorithm_nameSEXP, SEXP algorithm_infoSEXP, SEXP complete_triggersSEXP, SEXP number_interval_triggersSEXP, SEXP base_evaluation_triggersSEXP, SEXP number_target_triggersSEXP, SEXP parameters_nameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type result_folder(result_folderSEXP);
    Rcpp::traits::input_parameter< String >::type algorithm_name(algorithm_nameSEXP);
    Rcpp::traits::input_parameter< String >::type algorithm_info(algorithm_infoSEXP);
    Rcpp::traits::input_parameter< String >::type complete_triggers(complete_triggersSEXP);
    Rcpp::traits::input_parameter< int >::type number_interval_triggers(number_interval_triggersSEXP);
    Rcpp::traits::input_parameter< String >::type base_evaluation_triggers(base_evaluation_triggersSEXP);
    Rcpp::traits::input_parameter< int >::type number_target_triggers(number_target_triggersSEXP);
    Rcpp::traits::input_parameter< String >::type parameters_name(parameters_nameSEXP);
    c_init_observer(result_folder, algorithm_name, algorithm_info, complete_triggers, number_interval_triggers, base_evaluation_triggers, number_target_triggers, parameters_name);
    return R_NilValue;
END_RCPP
}
// get_problem_list
IntegerVector get_problem_list();
RcppExport SEXP _IOHexperimenter_get_problem_list() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_problem_list());
    return rcpp_result_gen;
END_RCPP
}
// get_dimension_list
IntegerVector get_dimension_list();
RcppExport SEXP _IOHexperimenter_get_dimension_list() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_dimension_list());
    return rcpp_result_gen;
END_RCPP
}
// get_suite_info
List get_suite_info();
RcppExport SEXP _IOHexperimenter_get_suite_info() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_suite_info());
    return rcpp_result_gen;
END_RCPP
}
// get_problem_info
List get_problem_info();
RcppExport SEXP _IOHexperimenter_get_problem_info() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_problem_info());
    return rcpp_result_gen;
END_RCPP
}
// c_get_next_problem
List c_get_next_problem();
RcppExport SEXP _IOHexperimenter_c_get_next_problem() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(c_get_next_problem());
    return rcpp_result_gen;
END_RCPP
}
// reset_problem
List reset_problem();
RcppExport SEXP _IOHexperimenter_reset_problem() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(reset_problem());
    return rcpp_result_gen;
END_RCPP
}
// c_eval
double c_eval(IntegerVector x);
RcppExport SEXP _IOHexperimenter_c_eval(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(c_eval(x));
    return rcpp_result_gen;
END_RCPP
}
// c_is_target_hit
int c_is_target_hit();
RcppExport SEXP _IOHexperimenter_c_is_target_hit() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(c_is_target_hit());
    return rcpp_result_gen;
END_RCPP
}
// c_get_evaluations
int c_get_evaluations();
RcppExport SEXP _IOHexperimenter_c_get_evaluations() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(c_get_evaluations());
    return rcpp_result_gen;
END_RCPP
}
// c_get_xopt
IntegerVector c_get_xopt();
RcppExport SEXP _IOHexperimenter_c_get_xopt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(c_get_xopt());
    return rcpp_result_gen;
END_RCPP
}
// c_get_fopt
double c_get_fopt();
RcppExport SEXP _IOHexperimenter_c_get_fopt() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(c_get_fopt());
    return rcpp_result_gen;
END_RCPP
}
// IOHfree
void IOHfree();
RcppExport SEXP _IOHexperimenter_IOHfree() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    IOHfree();
    return R_NilValue;
END_RCPP
}
// freeProblem
void freeProblem();
RcppExport SEXP _IOHexperimenter_freeProblem() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    freeProblem();
    return R_NilValue;
END_RCPP
}
// freeSuite
void freeSuite();
RcppExport SEXP _IOHexperimenter_freeSuite() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    freeSuite();
    return R_NilValue;
END_RCPP
}
// freeObserver
void freeObserver();
RcppExport SEXP _IOHexperimenter_freeObserver() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    freeObserver();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_IOHexperimenter_c_init_suite", (DL_FUNC) &_IOHexperimenter_c_init_suite, 3},
    {"_IOHexperimenter_c_init_observer", (DL_FUNC) &_IOHexperimenter_c_init_observer, 8},
    {"_IOHexperimenter_get_problem_list", (DL_FUNC) &_IOHexperimenter_get_problem_list, 0},
    {"_IOHexperimenter_get_dimension_list", (DL_FUNC) &_IOHexperimenter_get_dimension_list, 0},
    {"_IOHexperimenter_get_suite_info", (DL_FUNC) &_IOHexperimenter_get_suite_info, 0},
    {"_IOHexperimenter_get_problem_info", (DL_FUNC) &_IOHexperimenter_get_problem_info, 0},
    {"_IOHexperimenter_c_get_next_problem", (DL_FUNC) &_IOHexperimenter_c_get_next_problem, 0},
    {"_IOHexperimenter_reset_problem", (DL_FUNC) &_IOHexperimenter_reset_problem, 0},
    {"_IOHexperimenter_c_eval", (DL_FUNC) &_IOHexperimenter_c_eval, 1},
    {"_IOHexperimenter_c_is_target_hit", (DL_FUNC) &_IOHexperimenter_c_is_target_hit, 0},
    {"_IOHexperimenter_c_get_evaluations", (DL_FUNC) &_IOHexperimenter_c_get_evaluations, 0},
    {"_IOHexperimenter_c_get_xopt", (DL_FUNC) &_IOHexperimenter_c_get_xopt, 0},
    {"_IOHexperimenter_c_get_fopt", (DL_FUNC) &_IOHexperimenter_c_get_fopt, 0},
    {"_IOHexperimenter_IOHfree", (DL_FUNC) &_IOHexperimenter_IOHfree, 0},
    {"_IOHexperimenter_freeProblem", (DL_FUNC) &_IOHexperimenter_freeProblem, 0},
    {"_IOHexperimenter_freeSuite", (DL_FUNC) &_IOHexperimenter_freeSuite, 0},
    {"_IOHexperimenter_freeObserver", (DL_FUNC) &_IOHexperimenter_freeObserver, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_IOHexperimenter(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}