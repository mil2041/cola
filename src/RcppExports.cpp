// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gene_cooccurrence_in_geneset
NumericMatrix gene_cooccurrence_in_geneset(LogicalMatrix match_mat);
RcppExport SEXP cola_gene_cooccurrence_in_geneset(SEXP match_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type match_mat(match_matSEXP);
    rcpp_result_gen = Rcpp::wrap(gene_cooccurrence_in_geneset(match_mat));
    return rcpp_result_gen;
END_RCPP
}