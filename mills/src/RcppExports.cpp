// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dlmnomPP
arma::vec dlmnomPP(arma::mat Y_wp, arma::mat theta_c);
RcppExport SEXP _mills_dlmnomPP(SEXP Y_wpSEXP, SEXP theta_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y_wp(Y_wpSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta_c(theta_cSEXP);
    rcpp_result_gen = Rcpp::wrap(dlmnomPP(Y_wp, theta_c));
    return rcpp_result_gen;
END_RCPP
}
// dlmnomPPw
arma::vec dlmnomPPw(arma::mat Y_wp, arma::mat theta_c, arma::vec w);
RcppExport SEXP _mills_dlmnomPPw(SEXP Y_wpSEXP, SEXP theta_cSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y_wp(Y_wpSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta_c(theta_cSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(dlmnomPPw(Y_wp, theta_c, w));
    return rcpp_result_gen;
END_RCPP
}
// dlmnom_sep
arma::vec dlmnom_sep(arma::mat Y_wp, arma::mat theta_c);
RcppExport SEXP _mills_dlmnom_sep(SEXP Y_wpSEXP, SEXP theta_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y_wp(Y_wpSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type theta_c(theta_cSEXP);
    rcpp_result_gen = Rcpp::wrap(dlmnom_sep(Y_wp, theta_c));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mills_dlmnomPP", (DL_FUNC) &_mills_dlmnomPP, 2},
    {"_mills_dlmnomPPw", (DL_FUNC) &_mills_dlmnomPPw, 3},
    {"_mills_dlmnom_sep", (DL_FUNC) &_mills_dlmnom_sep, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_mills(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
