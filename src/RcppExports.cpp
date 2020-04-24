// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// deserialize_IsoForest
SEXP deserialize_IsoForest(Rcpp::RawVector src);
RcppExport SEXP _isotree_deserialize_IsoForest(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type src(srcSEXP);
    rcpp_result_gen = Rcpp::wrap(deserialize_IsoForest(src));
    return rcpp_result_gen;
END_RCPP
}
// deserialize_ExtIsoForest
SEXP deserialize_ExtIsoForest(Rcpp::RawVector src);
RcppExport SEXP _isotree_deserialize_ExtIsoForest(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type src(srcSEXP);
    rcpp_result_gen = Rcpp::wrap(deserialize_ExtIsoForest(src));
    return rcpp_result_gen;
END_RCPP
}
// deserialize_Imputer
SEXP deserialize_Imputer(Rcpp::RawVector src);
RcppExport SEXP _isotree_deserialize_Imputer(SEXP srcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type src(srcSEXP);
    rcpp_result_gen = Rcpp::wrap(deserialize_Imputer(src));
    return rcpp_result_gen;
END_RCPP
}
// check_null_ptr_model
Rcpp::LogicalVector check_null_ptr_model(SEXP ptr_model);
RcppExport SEXP _isotree_check_null_ptr_model(SEXP ptr_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr_model(ptr_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(check_null_ptr_model(ptr_model));
    return rcpp_result_gen;
END_RCPP
}
// fit_model
Rcpp::List fit_model(Rcpp::NumericVector X_num, Rcpp::IntegerVector X_cat, Rcpp::IntegerVector ncat, Rcpp::NumericVector Xc, Rcpp::IntegerVector Xc_ind, Rcpp::IntegerVector Xc_indptr, Rcpp::NumericVector sample_weights, Rcpp::NumericVector col_weights, size_t nrows, size_t ncols_numeric, size_t ncols_categ, size_t ndim, size_t ntry, Rcpp::CharacterVector coef_type, bool with_replacement, bool weight_as_sample, size_t sample_size, size_t ntrees, size_t max_depth, bool limit_depth, bool penalize_range, bool calc_dist, bool standardize_dist, bool sq_dist, bool calc_depth, bool standardize_depth, bool weigh_by_kurt, double prob_pick_by_gain_avg, double prob_split_by_gain_avg, double prob_pick_by_gain_pl, double prob_split_by_gain_pl, double min_gain, Rcpp::CharacterVector cat_split_type, Rcpp::CharacterVector new_cat_action, Rcpp::CharacterVector missing_action, bool all_perm, bool build_imputer, bool output_imputations, size_t min_imp_obs, Rcpp::CharacterVector depth_imp, Rcpp::CharacterVector weigh_imp_rows, int random_seed, int nthreads);
RcppExport SEXP _isotree_fit_model(SEXP X_numSEXP, SEXP X_catSEXP, SEXP ncatSEXP, SEXP XcSEXP, SEXP Xc_indSEXP, SEXP Xc_indptrSEXP, SEXP sample_weightsSEXP, SEXP col_weightsSEXP, SEXP nrowsSEXP, SEXP ncols_numericSEXP, SEXP ncols_categSEXP, SEXP ndimSEXP, SEXP ntrySEXP, SEXP coef_typeSEXP, SEXP with_replacementSEXP, SEXP weight_as_sampleSEXP, SEXP sample_sizeSEXP, SEXP ntreesSEXP, SEXP max_depthSEXP, SEXP limit_depthSEXP, SEXP penalize_rangeSEXP, SEXP calc_distSEXP, SEXP standardize_distSEXP, SEXP sq_distSEXP, SEXP calc_depthSEXP, SEXP standardize_depthSEXP, SEXP weigh_by_kurtSEXP, SEXP prob_pick_by_gain_avgSEXP, SEXP prob_split_by_gain_avgSEXP, SEXP prob_pick_by_gain_plSEXP, SEXP prob_split_by_gain_plSEXP, SEXP min_gainSEXP, SEXP cat_split_typeSEXP, SEXP new_cat_actionSEXP, SEXP missing_actionSEXP, SEXP all_permSEXP, SEXP build_imputerSEXP, SEXP output_imputationsSEXP, SEXP min_imp_obsSEXP, SEXP depth_impSEXP, SEXP weigh_imp_rowsSEXP, SEXP random_seedSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X_num(X_numSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X_cat(X_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ncat(ncatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_ind(Xc_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_indptr(Xc_indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sample_weights(sample_weightsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type col_weights(col_weightsSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< size_t >::type ncols_numeric(ncols_numericSEXP);
    Rcpp::traits::input_parameter< size_t >::type ncols_categ(ncols_categSEXP);
    Rcpp::traits::input_parameter< size_t >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< size_t >::type ntry(ntrySEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type coef_type(coef_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type with_replacement(with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type weight_as_sample(weight_as_sampleSEXP);
    Rcpp::traits::input_parameter< size_t >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< size_t >::type ntrees(ntreesSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type limit_depth(limit_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type penalize_range(penalize_rangeSEXP);
    Rcpp::traits::input_parameter< bool >::type calc_dist(calc_distSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize_dist(standardize_distSEXP);
    Rcpp::traits::input_parameter< bool >::type sq_dist(sq_distSEXP);
    Rcpp::traits::input_parameter< bool >::type calc_depth(calc_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize_depth(standardize_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type weigh_by_kurt(weigh_by_kurtSEXP);
    Rcpp::traits::input_parameter< double >::type prob_pick_by_gain_avg(prob_pick_by_gain_avgSEXP);
    Rcpp::traits::input_parameter< double >::type prob_split_by_gain_avg(prob_split_by_gain_avgSEXP);
    Rcpp::traits::input_parameter< double >::type prob_pick_by_gain_pl(prob_pick_by_gain_plSEXP);
    Rcpp::traits::input_parameter< double >::type prob_split_by_gain_pl(prob_split_by_gain_plSEXP);
    Rcpp::traits::input_parameter< double >::type min_gain(min_gainSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type cat_split_type(cat_split_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type new_cat_action(new_cat_actionSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type missing_action(missing_actionSEXP);
    Rcpp::traits::input_parameter< bool >::type all_perm(all_permSEXP);
    Rcpp::traits::input_parameter< bool >::type build_imputer(build_imputerSEXP);
    Rcpp::traits::input_parameter< bool >::type output_imputations(output_imputationsSEXP);
    Rcpp::traits::input_parameter< size_t >::type min_imp_obs(min_imp_obsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type depth_imp(depth_impSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type weigh_imp_rows(weigh_imp_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type random_seed(random_seedSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_model(X_num, X_cat, ncat, Xc, Xc_ind, Xc_indptr, sample_weights, col_weights, nrows, ncols_numeric, ncols_categ, ndim, ntry, coef_type, with_replacement, weight_as_sample, sample_size, ntrees, max_depth, limit_depth, penalize_range, calc_dist, standardize_dist, sq_dist, calc_depth, standardize_depth, weigh_by_kurt, prob_pick_by_gain_avg, prob_split_by_gain_avg, prob_pick_by_gain_pl, prob_split_by_gain_pl, min_gain, cat_split_type, new_cat_action, missing_action, all_perm, build_imputer, output_imputations, min_imp_obs, depth_imp, weigh_imp_rows, random_seed, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// fit_tree
Rcpp::RawVector fit_tree(SEXP model_R_ptr, Rcpp::NumericVector X_num, Rcpp::IntegerVector X_cat, Rcpp::IntegerVector ncat, Rcpp::NumericVector Xc, Rcpp::IntegerVector Xc_ind, Rcpp::IntegerVector Xc_indptr, Rcpp::NumericVector sample_weights, Rcpp::NumericVector col_weights, size_t nrows, size_t ncols_numeric, size_t ncols_categ, size_t ndim, size_t ntry, Rcpp::CharacterVector coef_type, size_t max_depth, bool limit_depth, bool penalize_range, bool weigh_by_kurt, double prob_pick_by_gain_avg, double prob_split_by_gain_avg, double prob_pick_by_gain_pl, double prob_split_by_gain_pl, double min_gain, Rcpp::CharacterVector cat_split_type, Rcpp::CharacterVector new_cat_action, Rcpp::CharacterVector missing_action, bool build_imputer, size_t min_imp_obs, SEXP imp_R_ptr, Rcpp::CharacterVector depth_imp, Rcpp::CharacterVector weigh_imp_rows, bool all_perm, uint64_t random_seed);
RcppExport SEXP _isotree_fit_tree(SEXP model_R_ptrSEXP, SEXP X_numSEXP, SEXP X_catSEXP, SEXP ncatSEXP, SEXP XcSEXP, SEXP Xc_indSEXP, SEXP Xc_indptrSEXP, SEXP sample_weightsSEXP, SEXP col_weightsSEXP, SEXP nrowsSEXP, SEXP ncols_numericSEXP, SEXP ncols_categSEXP, SEXP ndimSEXP, SEXP ntrySEXP, SEXP coef_typeSEXP, SEXP max_depthSEXP, SEXP limit_depthSEXP, SEXP penalize_rangeSEXP, SEXP weigh_by_kurtSEXP, SEXP prob_pick_by_gain_avgSEXP, SEXP prob_split_by_gain_avgSEXP, SEXP prob_pick_by_gain_plSEXP, SEXP prob_split_by_gain_plSEXP, SEXP min_gainSEXP, SEXP cat_split_typeSEXP, SEXP new_cat_actionSEXP, SEXP missing_actionSEXP, SEXP build_imputerSEXP, SEXP min_imp_obsSEXP, SEXP imp_R_ptrSEXP, SEXP depth_impSEXP, SEXP weigh_imp_rowsSEXP, SEXP all_permSEXP, SEXP random_seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_R_ptr(model_R_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X_num(X_numSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X_cat(X_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type ncat(ncatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_ind(Xc_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_indptr(Xc_indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sample_weights(sample_weightsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type col_weights(col_weightsSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< size_t >::type ncols_numeric(ncols_numericSEXP);
    Rcpp::traits::input_parameter< size_t >::type ncols_categ(ncols_categSEXP);
    Rcpp::traits::input_parameter< size_t >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< size_t >::type ntry(ntrySEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type coef_type(coef_typeSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type limit_depth(limit_depthSEXP);
    Rcpp::traits::input_parameter< bool >::type penalize_range(penalize_rangeSEXP);
    Rcpp::traits::input_parameter< bool >::type weigh_by_kurt(weigh_by_kurtSEXP);
    Rcpp::traits::input_parameter< double >::type prob_pick_by_gain_avg(prob_pick_by_gain_avgSEXP);
    Rcpp::traits::input_parameter< double >::type prob_split_by_gain_avg(prob_split_by_gain_avgSEXP);
    Rcpp::traits::input_parameter< double >::type prob_pick_by_gain_pl(prob_pick_by_gain_plSEXP);
    Rcpp::traits::input_parameter< double >::type prob_split_by_gain_pl(prob_split_by_gain_plSEXP);
    Rcpp::traits::input_parameter< double >::type min_gain(min_gainSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type cat_split_type(cat_split_typeSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type new_cat_action(new_cat_actionSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type missing_action(missing_actionSEXP);
    Rcpp::traits::input_parameter< bool >::type build_imputer(build_imputerSEXP);
    Rcpp::traits::input_parameter< size_t >::type min_imp_obs(min_imp_obsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type imp_R_ptr(imp_R_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type depth_imp(depth_impSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type weigh_imp_rows(weigh_imp_rowsSEXP);
    Rcpp::traits::input_parameter< bool >::type all_perm(all_permSEXP);
    Rcpp::traits::input_parameter< uint64_t >::type random_seed(random_seedSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_tree(model_R_ptr, X_num, X_cat, ncat, Xc, Xc_ind, Xc_indptr, sample_weights, col_weights, nrows, ncols_numeric, ncols_categ, ndim, ntry, coef_type, max_depth, limit_depth, penalize_range, weigh_by_kurt, prob_pick_by_gain_avg, prob_split_by_gain_avg, prob_pick_by_gain_pl, prob_split_by_gain_pl, min_gain, cat_split_type, new_cat_action, missing_action, build_imputer, min_imp_obs, imp_R_ptr, depth_imp, weigh_imp_rows, all_perm, random_seed));
    return rcpp_result_gen;
END_RCPP
}
// predict_iso
void predict_iso(SEXP model_R_ptr, Rcpp::NumericVector outp, Rcpp::IntegerVector tree_num, bool is_extended, Rcpp::NumericVector X_num, Rcpp::IntegerVector X_cat, Rcpp::NumericVector Xc, Rcpp::IntegerVector Xc_ind, Rcpp::IntegerVector Xc_indptr, Rcpp::NumericVector Xr, Rcpp::IntegerVector Xr_ind, Rcpp::IntegerVector Xr_indptr, size_t nrows, int nthreads, bool standardize);
RcppExport SEXP _isotree_predict_iso(SEXP model_R_ptrSEXP, SEXP outpSEXP, SEXP tree_numSEXP, SEXP is_extendedSEXP, SEXP X_numSEXP, SEXP X_catSEXP, SEXP XcSEXP, SEXP Xc_indSEXP, SEXP Xc_indptrSEXP, SEXP XrSEXP, SEXP Xr_indSEXP, SEXP Xr_indptrSEXP, SEXP nrowsSEXP, SEXP nthreadsSEXP, SEXP standardizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_R_ptr(model_R_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type outp(outpSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type tree_num(tree_numSEXP);
    Rcpp::traits::input_parameter< bool >::type is_extended(is_extendedSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X_num(X_numSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X_cat(X_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_ind(Xc_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_indptr(Xc_indptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xr_ind(Xr_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xr_indptr(Xr_indptrSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize(standardizeSEXP);
    predict_iso(model_R_ptr, outp, tree_num, is_extended, X_num, X_cat, Xc, Xc_ind, Xc_indptr, Xr, Xr_ind, Xr_indptr, nrows, nthreads, standardize);
    return R_NilValue;
END_RCPP
}
// dist_iso
void dist_iso(SEXP model_R_ptr, Rcpp::NumericVector tmat, Rcpp::NumericVector dmat, bool is_extended, Rcpp::NumericVector X_num, Rcpp::IntegerVector X_cat, Rcpp::NumericVector Xc, Rcpp::IntegerVector Xc_ind, Rcpp::IntegerVector Xc_indptr, size_t nrows, int nthreads, bool assume_full_distr, bool standardize_dist, bool sq_dist);
RcppExport SEXP _isotree_dist_iso(SEXP model_R_ptrSEXP, SEXP tmatSEXP, SEXP dmatSEXP, SEXP is_extendedSEXP, SEXP X_numSEXP, SEXP X_catSEXP, SEXP XcSEXP, SEXP Xc_indSEXP, SEXP Xc_indptrSEXP, SEXP nrowsSEXP, SEXP nthreadsSEXP, SEXP assume_full_distrSEXP, SEXP standardize_distSEXP, SEXP sq_distSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_R_ptr(model_R_ptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type tmat(tmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< bool >::type is_extended(is_extendedSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X_num(X_numSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X_cat(X_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xc(XcSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_ind(Xc_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xc_indptr(Xc_indptrSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    Rcpp::traits::input_parameter< bool >::type assume_full_distr(assume_full_distrSEXP);
    Rcpp::traits::input_parameter< bool >::type standardize_dist(standardize_distSEXP);
    Rcpp::traits::input_parameter< bool >::type sq_dist(sq_distSEXP);
    dist_iso(model_R_ptr, tmat, dmat, is_extended, X_num, X_cat, Xc, Xc_ind, Xc_indptr, nrows, nthreads, assume_full_distr, standardize_dist, sq_dist);
    return R_NilValue;
END_RCPP
}
// impute_iso
Rcpp::List impute_iso(SEXP model_R_ptr, SEXP imputer_R_ptr, bool is_extended, Rcpp::NumericVector X_num, Rcpp::IntegerVector X_cat, Rcpp::NumericVector Xr, Rcpp::IntegerVector Xr_ind, Rcpp::IntegerVector Xr_indptr, size_t nrows, int nthreads);
RcppExport SEXP _isotree_impute_iso(SEXP model_R_ptrSEXP, SEXP imputer_R_ptrSEXP, SEXP is_extendedSEXP, SEXP X_numSEXP, SEXP X_catSEXP, SEXP XrSEXP, SEXP Xr_indSEXP, SEXP Xr_indptrSEXP, SEXP nrowsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_R_ptr(model_R_ptrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type imputer_R_ptr(imputer_R_ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type is_extended(is_extendedSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type X_num(X_numSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type X_cat(X_catSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xr(XrSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xr_ind(Xr_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Xr_indptr(Xr_indptrSEXP);
    Rcpp::traits::input_parameter< size_t >::type nrows(nrowsSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(impute_iso(model_R_ptr, imputer_R_ptr, is_extended, X_num, X_cat, Xr, Xr_ind, Xr_indptr, nrows, nthreads));
    return rcpp_result_gen;
END_RCPP
}
// get_n_nodes
Rcpp::List get_n_nodes(SEXP model_R_ptr, bool is_extended, int nthreads);
RcppExport SEXP _isotree_get_n_nodes(SEXP model_R_ptrSEXP, SEXP is_extendedSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_R_ptr(model_R_ptrSEXP);
    Rcpp::traits::input_parameter< bool >::type is_extended(is_extendedSEXP);
    Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP);
    rcpp_result_gen = Rcpp::wrap(get_n_nodes(model_R_ptr, is_extended, nthreads));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_isotree_deserialize_IsoForest", (DL_FUNC) &_isotree_deserialize_IsoForest, 1},
    {"_isotree_deserialize_ExtIsoForest", (DL_FUNC) &_isotree_deserialize_ExtIsoForest, 1},
    {"_isotree_deserialize_Imputer", (DL_FUNC) &_isotree_deserialize_Imputer, 1},
    {"_isotree_check_null_ptr_model", (DL_FUNC) &_isotree_check_null_ptr_model, 1},
    {"_isotree_fit_model", (DL_FUNC) &_isotree_fit_model, 43},
    {"_isotree_fit_tree", (DL_FUNC) &_isotree_fit_tree, 34},
    {"_isotree_predict_iso", (DL_FUNC) &_isotree_predict_iso, 15},
    {"_isotree_dist_iso", (DL_FUNC) &_isotree_dist_iso, 14},
    {"_isotree_impute_iso", (DL_FUNC) &_isotree_impute_iso, 10},
    {"_isotree_get_n_nodes", (DL_FUNC) &_isotree_get_n_nodes, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_isotree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
