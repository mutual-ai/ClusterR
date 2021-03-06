// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// tot_ss_data
double tot_ss_data(arma::mat x);
RcppExport SEXP _ClusterR_tot_ss_data(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tot_ss_data(x));
    return rcpp_result_gen;
END_RCPP
}
// KMEANS_rcpp
Rcpp::List KMEANS_rcpp(arma::mat& data, int clusters, int num_init, int max_iters, std::string initializer, bool fuzzy, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double eps, double tol_optimal_init, int seed);
RcppExport SEXP _ClusterR_KMEANS_rcpp(SEXP dataSEXP, SEXP clustersSEXP, SEXP num_initSEXP, SEXP max_itersSEXP, SEXP initializerSEXP, SEXP fuzzySEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP epsSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type num_init(num_initSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< std::string >::type initializer(initializerSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(KMEANS_rcpp(data, clusters, num_init, max_iters, initializer, fuzzy, verbose, CENTROIDS, tol, eps, tol_optimal_init, seed));
    return rcpp_result_gen;
END_RCPP
}
// KMEANS_arma
arma::mat KMEANS_arma(arma::mat& data, int clusters, int n_iter, bool verbose, std::string seed_mode, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, int seed);
RcppExport SEXP _ClusterR_KMEANS_arma(SEXP dataSEXP, SEXP clustersSEXP, SEXP n_iterSEXP, SEXP verboseSEXP, SEXP seed_modeSEXP, SEXP CENTROIDSSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type n_iter(n_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(KMEANS_arma(data, clusters, n_iter, verbose, seed_mode, CENTROIDS, seed));
    return rcpp_result_gen;
END_RCPP
}
// opt_clust_fK
Rcpp::List opt_clust_fK(arma::vec sum_distortion, int data_num_cols, double threshold);
RcppExport SEXP _ClusterR_opt_clust_fK(SEXP sum_distortionSEXP, SEXP data_num_colsSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type sum_distortion(sum_distortionSEXP);
    Rcpp::traits::input_parameter< int >::type data_num_cols(data_num_colsSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_clust_fK(sum_distortion, data_num_cols, threshold));
    return rcpp_result_gen;
END_RCPP
}
// INTRA_CLUSTER_DISS
Rcpp::List INTRA_CLUSTER_DISS(arma::mat& data, Rcpp::List CLUSTERS);
RcppExport SEXP _ClusterR_INTRA_CLUSTER_DISS(SEXP dataSEXP, SEXP CLUSTERSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type CLUSTERS(CLUSTERSSEXP);
    rcpp_result_gen = Rcpp::wrap(INTRA_CLUSTER_DISS(data, CLUSTERS));
    return rcpp_result_gen;
END_RCPP
}
// Rcpp_2arma_mat
arma::mat Rcpp_2arma_mat(Rcpp::NumericMatrix x);
RcppExport SEXP _ClusterR_Rcpp_2arma_mat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Rcpp_2arma_mat(x));
    return rcpp_result_gen;
END_RCPP
}
// SILHOUETTE_metric
Rcpp::List SILHOUETTE_metric(arma::mat& data, arma::vec CLUSTER, Rcpp::List tmp_clust, Rcpp::List in_cluster_dist);
RcppExport SEXP _ClusterR_SILHOUETTE_metric(SEXP dataSEXP, SEXP CLUSTERSEXP, SEXP tmp_clustSEXP, SEXP in_cluster_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type tmp_clust(tmp_clustSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type in_cluster_dist(in_cluster_distSEXP);
    rcpp_result_gen = Rcpp::wrap(SILHOUETTE_metric(data, CLUSTER, tmp_clust, in_cluster_dist));
    return rcpp_result_gen;
END_RCPP
}
// evaluation_rcpp
Rcpp::List evaluation_rcpp(arma::mat& data, arma::vec CLUSTER, bool silhouette);
RcppExport SEXP _ClusterR_evaluation_rcpp(SEXP dataSEXP, SEXP CLUSTERSEXP, SEXP silhouetteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    Rcpp::traits::input_parameter< bool >::type silhouette(silhouetteSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluation_rcpp(data, CLUSTER, silhouette));
    return rcpp_result_gen;
END_RCPP
}
// mini_batch_kmeans
Rcpp::List mini_batch_kmeans(arma::mat& data, int clusters, int batch_size, int max_iters, int num_init, double init_fraction, std::string initializer, int early_stop_iter, bool verbose, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, double tol, double tol_optimal_init, int seed);
RcppExport SEXP _ClusterR_mini_batch_kmeans(SEXP dataSEXP, SEXP clustersSEXP, SEXP batch_sizeSEXP, SEXP max_itersSEXP, SEXP num_initSEXP, SEXP init_fractionSEXP, SEXP initializerSEXP, SEXP early_stop_iterSEXP, SEXP verboseSEXP, SEXP CENTROIDSSEXP, SEXP tolSEXP, SEXP tol_optimal_initSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< int >::type batch_size(batch_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< int >::type num_init(num_initSEXP);
    Rcpp::traits::input_parameter< double >::type init_fraction(init_fractionSEXP);
    Rcpp::traits::input_parameter< std::string >::type initializer(initializerSEXP);
    Rcpp::traits::input_parameter< int >::type early_stop_iter(early_stop_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< double >::type tol_optimal_init(tol_optimal_initSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(mini_batch_kmeans(data, clusters, batch_size, max_iters, num_init, init_fraction, initializer, early_stop_iter, verbose, CENTROIDS, tol, tol_optimal_init, seed));
    return rcpp_result_gen;
END_RCPP
}
// Predict_mini_batch_kmeans
Rcpp::List Predict_mini_batch_kmeans(arma::mat& data, Rcpp::Nullable<Rcpp::NumericMatrix> CENTROIDS, bool fuzzy, double eps);
RcppExport SEXP _ClusterR_Predict_mini_batch_kmeans(SEXP dataSEXP, SEXP CENTROIDSSEXP, SEXP fuzzySEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::NumericMatrix> >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(Predict_mini_batch_kmeans(data, CENTROIDS, fuzzy, eps));
    return rcpp_result_gen;
END_RCPP
}
// GMM_arma
Rcpp::List GMM_arma(arma::mat& data, int gaussian_comps, std::string dist_mode, std::string seed_mode, int km_iter, int em_iter, bool verbose, double var_floor, int seed);
RcppExport SEXP _ClusterR_GMM_arma(SEXP dataSEXP, SEXP gaussian_compsSEXP, SEXP dist_modeSEXP, SEXP seed_modeSEXP, SEXP km_iterSEXP, SEXP em_iterSEXP, SEXP verboseSEXP, SEXP var_floorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type gaussian_comps(gaussian_compsSEXP);
    Rcpp::traits::input_parameter< std::string >::type dist_mode(dist_modeSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< int >::type km_iter(km_iterSEXP);
    Rcpp::traits::input_parameter< int >::type em_iter(em_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type var_floor(var_floorSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(GMM_arma(data, gaussian_comps, dist_mode, seed_mode, km_iter, em_iter, verbose, var_floor, seed));
    return rcpp_result_gen;
END_RCPP
}
// INV_COV
arma::mat INV_COV(arma::vec COV_VEC);
RcppExport SEXP _ClusterR_INV_COV(SEXP COV_VECSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type COV_VEC(COV_VECSEXP);
    rcpp_result_gen = Rcpp::wrap(INV_COV(COV_VEC));
    return rcpp_result_gen;
END_RCPP
}
// predict_MGausDPDF
Rcpp::List predict_MGausDPDF(arma::mat data, arma::mat CENTROIDS, arma::mat COVARIANCE, arma::vec WEIGHTS, double eps);
RcppExport SEXP _ClusterR_predict_MGausDPDF(SEXP dataSEXP, SEXP CENTROIDSSEXP, SEXP COVARIANCESEXP, SEXP WEIGHTSSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type CENTROIDS(CENTROIDSSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type COVARIANCE(COVARIANCESEXP);
    Rcpp::traits::input_parameter< arma::vec >::type WEIGHTS(WEIGHTSSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_MGausDPDF(data, CENTROIDS, COVARIANCE, WEIGHTS, eps));
    return rcpp_result_gen;
END_RCPP
}
// GMM_arma_AIC_BIC
arma::rowvec GMM_arma_AIC_BIC(arma::mat& data, int max_clusters, std::string dist_mode, std::string seed_mode, int km_iter, int em_iter, bool verbose, double var_floor, std::string criterion, int seed);
RcppExport SEXP _ClusterR_GMM_arma_AIC_BIC(SEXP dataSEXP, SEXP max_clustersSEXP, SEXP dist_modeSEXP, SEXP seed_modeSEXP, SEXP km_iterSEXP, SEXP em_iterSEXP, SEXP verboseSEXP, SEXP var_floorSEXP, SEXP criterionSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type max_clusters(max_clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type dist_mode(dist_modeSEXP);
    Rcpp::traits::input_parameter< std::string >::type seed_mode(seed_modeSEXP);
    Rcpp::traits::input_parameter< int >::type km_iter(km_iterSEXP);
    Rcpp::traits::input_parameter< int >::type em_iter(em_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type var_floor(var_floorSEXP);
    Rcpp::traits::input_parameter< std::string >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(GMM_arma_AIC_BIC(data, max_clusters, dist_mode, seed_mode, km_iter, em_iter, verbose, var_floor, criterion, seed));
    return rcpp_result_gen;
END_RCPP
}
// METHODS
double METHODS(arma::mat& data, arma::mat& data1, std::string& method, unsigned int i, unsigned int j, bool flag_isfinite, arma::mat& cov_mat, double minkowski_p, double eps, bool exception_nan);
RcppExport SEXP _ClusterR_METHODS(SEXP dataSEXP, SEXP data1SEXP, SEXP methodSEXP, SEXP iSEXP, SEXP jSEXP, SEXP flag_isfiniteSEXP, SEXP cov_matSEXP, SEXP minkowski_pSEXP, SEXP epsSEXP, SEXP exception_nanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data1(data1SEXP);
    Rcpp::traits::input_parameter< std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type j(jSEXP);
    Rcpp::traits::input_parameter< bool >::type flag_isfinite(flag_isfiniteSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type cov_mat(cov_matSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type exception_nan(exception_nanSEXP);
    rcpp_result_gen = Rcpp::wrap(METHODS(data, data1, method, i, j, flag_isfinite, cov_mat, minkowski_p, eps, exception_nan));
    return rcpp_result_gen;
END_RCPP
}
// dissim_mat
arma::mat dissim_mat(arma::mat& data, std::string& method, double minkowski_p, bool upper, bool diagonal, int threads, double eps);
RcppExport SEXP _ClusterR_dissim_mat(SEXP dataSEXP, SEXP methodSEXP, SEXP minkowski_pSEXP, SEXP upperSEXP, SEXP diagonalSEXP, SEXP threadsSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< bool >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< bool >::type diagonal(diagonalSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(dissim_mat(data, method, minkowski_p, upper, diagonal, threads, eps));
    return rcpp_result_gen;
END_RCPP
}
// boolean_function
bool boolean_function(arma::rowvec x, int y);
RcppExport SEXP _ClusterR_boolean_function(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(boolean_function(x, y));
    return rcpp_result_gen;
END_RCPP
}
// inner_field_func
arma::field<arma::mat> inner_field_func(unsigned int f, unsigned int sorted_medoids_elem, unsigned int END_IDX_nelem, arma::rowvec& end_indices_vec, arma::mat& data, arma::rowvec& sorted_medoids, arma::rowvec& sorted_medoids_increment);
RcppExport SEXP _ClusterR_inner_field_func(SEXP fSEXP, SEXP sorted_medoids_elemSEXP, SEXP END_IDX_nelemSEXP, SEXP end_indices_vecSEXP, SEXP dataSEXP, SEXP sorted_medoidsSEXP, SEXP sorted_medoids_incrementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type f(fSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type sorted_medoids_elem(sorted_medoids_elemSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type END_IDX_nelem(END_IDX_nelemSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type end_indices_vec(end_indices_vecSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type sorted_medoids(sorted_medoidsSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type sorted_medoids_increment(sorted_medoids_incrementSEXP);
    rcpp_result_gen = Rcpp::wrap(inner_field_func(f, sorted_medoids_elem, END_IDX_nelem, end_indices_vec, data, sorted_medoids, sorted_medoids_increment));
    return rcpp_result_gen;
END_RCPP
}
// silhouette_matrix
Rcpp::List silhouette_matrix(arma::mat& data, arma::rowvec end_indices_vec, arma::rowvec end_cost_vec, int threads);
RcppExport SEXP _ClusterR_silhouette_matrix(SEXP dataSEXP, SEXP end_indices_vecSEXP, SEXP end_cost_vecSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type end_indices_vec(end_indices_vecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type end_cost_vec(end_cost_vecSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(silhouette_matrix(data, end_indices_vec, end_cost_vec, threads));
    return rcpp_result_gen;
END_RCPP
}
// subset_vec
arma::uvec subset_vec(arma::uvec x, arma::uvec y);
RcppExport SEXP _ClusterR_subset_vec(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(subset_vec(x, y));
    return rcpp_result_gen;
END_RCPP
}
// field_cm_inner
arma::field<arma::rowvec> field_cm_inner(arma::uvec& copy_medoids, arma::uvec& non_medoids, arma::mat& data, unsigned int i, unsigned int j);
RcppExport SEXP _ClusterR_field_cm_inner(SEXP copy_medoidsSEXP, SEXP non_medoidsSEXP, SEXP dataSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec& >::type copy_medoids(copy_medoidsSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type non_medoids(non_medoidsSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type i(iSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(field_cm_inner(copy_medoids, non_medoids, data, i, j));
    return rcpp_result_gen;
END_RCPP
}
// ClusterMedoids
Rcpp::List ClusterMedoids(arma::mat& data, int clusters, std::string method, double minkowski_p, int threads, bool verbose, bool swap_phase, bool fuzzy, int seed);
RcppExport SEXP _ClusterR_ClusterMedoids(SEXP dataSEXP, SEXP clustersSEXP, SEXP methodSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP swap_phaseSEXP, SEXP fuzzySEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterMedoids(data, clusters, method, minkowski_p, threads, verbose, swap_phase, fuzzy, seed));
    return rcpp_result_gen;
END_RCPP
}
// dissim_MEDOIDS
arma::mat dissim_MEDOIDS(arma::mat& data, std::string& method, arma::mat MEDOIDS, double minkowski_p, int threads, double eps);
RcppExport SEXP _ClusterR_dissim_MEDOIDS(SEXP dataSEXP, SEXP methodSEXP, SEXP MEDOIDSSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MEDOIDS(MEDOIDSSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(dissim_MEDOIDS(data, method, MEDOIDS, minkowski_p, threads, eps));
    return rcpp_result_gen;
END_RCPP
}
// fuzzy_and_stats
Rcpp::List fuzzy_and_stats(arma::mat data, double eps, bool fuzzy);
RcppExport SEXP _ClusterR_fuzzy_and_stats(SEXP dataSEXP, SEXP epsSEXP, SEXP fuzzySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    rcpp_result_gen = Rcpp::wrap(fuzzy_and_stats(data, eps, fuzzy));
    return rcpp_result_gen;
END_RCPP
}
// isolation
arma::rowvec isolation(arma::mat dissim_mat_subset, arma::uvec x);
RcppExport SEXP _ClusterR_isolation(SEXP dissim_mat_subsetSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dissim_mat_subset(dissim_mat_subsetSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(isolation(dissim_mat_subset, x));
    return rcpp_result_gen;
END_RCPP
}
// ClaraMedoids
Rcpp::List ClaraMedoids(arma::mat& data, int clusters, std::string method, int samples, double sample_size, double minkowski_p, int threads, bool verbose, bool swap_phase, bool fuzzy, int seed);
RcppExport SEXP _ClusterR_ClaraMedoids(SEXP dataSEXP, SEXP clustersSEXP, SEXP methodSEXP, SEXP samplesSEXP, SEXP sample_sizeSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP verboseSEXP, SEXP swap_phaseSEXP, SEXP fuzzySEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(ClaraMedoids(data, clusters, method, samples, sample_size, minkowski_p, threads, verbose, swap_phase, fuzzy, seed));
    return rcpp_result_gen;
END_RCPP
}
// predict_medoids
Rcpp::List predict_medoids(arma::mat& data, std::string method, arma::mat MEDOIDS, double minkowski_p, int threads, bool fuzzy, double eps);
RcppExport SEXP _ClusterR_predict_medoids(SEXP dataSEXP, SEXP methodSEXP, SEXP MEDOIDSSEXP, SEXP minkowski_pSEXP, SEXP threadsSEXP, SEXP fuzzySEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type MEDOIDS(MEDOIDSSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type fuzzy(fuzzySEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_medoids(data, method, MEDOIDS, minkowski_p, threads, fuzzy, eps));
    return rcpp_result_gen;
END_RCPP
}
// split_rcpp_lst
Rcpp::List split_rcpp_lst(Rcpp::List lst);
RcppExport SEXP _ClusterR_split_rcpp_lst(SEXP lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type lst(lstSEXP);
    rcpp_result_gen = Rcpp::wrap(split_rcpp_lst(lst));
    return rcpp_result_gen;
END_RCPP
}
// OptClust
Rcpp::List OptClust(arma::mat& data, int iter_clust, std::string method, bool clara, int samples, double sample_size, double minkowski_p, std::string criterion, int threads, bool swap_phase, bool verbose, int seed);
RcppExport SEXP _ClusterR_OptClust(SEXP dataSEXP, SEXP iter_clustSEXP, SEXP methodSEXP, SEXP claraSEXP, SEXP samplesSEXP, SEXP sample_sizeSEXP, SEXP minkowski_pSEXP, SEXP criterionSEXP, SEXP threadsSEXP, SEXP swap_phaseSEXP, SEXP verboseSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type iter_clust(iter_clustSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type clara(claraSEXP);
    Rcpp::traits::input_parameter< int >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< double >::type sample_size(sample_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type minkowski_p(minkowski_pSEXP);
    Rcpp::traits::input_parameter< std::string >::type criterion(criterionSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type swap_phase(swap_phaseSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(OptClust(data, iter_clust, method, clara, samples, sample_size, minkowski_p, criterion, threads, swap_phase, verbose, seed));
    return rcpp_result_gen;
END_RCPP
}
// set_seed
void set_seed(int seed);
RcppExport SEXP _ClusterR_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// cluster_indices
Rcpp::List cluster_indices(arma::vec CLUSTER);
RcppExport SEXP _ClusterR_cluster_indices(SEXP CLUSTERSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type CLUSTER(CLUSTERSEXP);
    rcpp_result_gen = Rcpp::wrap(cluster_indices(CLUSTER));
    return rcpp_result_gen;
END_RCPP
}
// check_NaN_Inf
bool check_NaN_Inf(arma::mat x);
RcppExport SEXP _ClusterR_check_NaN_Inf(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(check_NaN_Inf(x));
    return rcpp_result_gen;
END_RCPP
}
// calc_silhouette
double calc_silhouette(double intra, double outer);
RcppExport SEXP _ClusterR_calc_silhouette(SEXP intraSEXP, SEXP outerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type intra(intraSEXP);
    Rcpp::traits::input_parameter< double >::type outer(outerSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_silhouette(intra, outer));
    return rcpp_result_gen;
END_RCPP
}
// sample_vec
arma::rowvec sample_vec(int num_elem, int start, int end, bool replace);
RcppExport SEXP _ClusterR_sample_vec(SEXP num_elemSEXP, SEXP startSEXP, SEXP endSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type num_elem(num_elemSEXP);
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_vec(num_elem, start, end, replace));
    return rcpp_result_gen;
END_RCPP
}
// squared_norm
double squared_norm(arma::mat x);
RcppExport SEXP _ClusterR_squared_norm(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(squared_norm(x));
    return rcpp_result_gen;
END_RCPP
}
// MinMat
int MinMat(arma::vec x);
RcppExport SEXP _ClusterR_MinMat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(MinMat(x));
    return rcpp_result_gen;
END_RCPP
}
// WCSS
arma::vec WCSS(arma::rowvec vec, arma::mat centroids);
RcppExport SEXP _ClusterR_WCSS(SEXP vecSEXP, SEXP centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type centroids(centroidsSEXP);
    rcpp_result_gen = Rcpp::wrap(WCSS(vec, centroids));
    return rcpp_result_gen;
END_RCPP
}
// validate_centroids
arma::rowvec validate_centroids(arma::mat& data, arma::mat init_centroids);
RcppExport SEXP _ClusterR_validate_centroids(SEXP dataSEXP, SEXP init_centroidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type init_centroids(init_centroidsSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_centroids(data, init_centroids));
    return rcpp_result_gen;
END_RCPP
}
// kmeans_pp_dist
double kmeans_pp_dist(arma::rowvec vec, arma::rowvec centroid);
RcppExport SEXP _ClusterR_kmeans_pp_dist(SEXP vecSEXP, SEXP centroidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type centroid(centroidSEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans_pp_dist(vec, centroid));
    return rcpp_result_gen;
END_RCPP
}
// kmeans_pp_init
arma::mat kmeans_pp_init(arma::mat& data, int clusters, bool medoids);
RcppExport SEXP _ClusterR_kmeans_pp_init(SEXP dataSEXP, SEXP clustersSEXP, SEXP medoidsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type medoids(medoidsSEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans_pp_init(data, clusters, medoids));
    return rcpp_result_gen;
END_RCPP
}
// norm_fuzzy
arma::rowvec norm_fuzzy(arma::rowvec vec, double eps);
RcppExport SEXP _ClusterR_norm_fuzzy(SEXP vecSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_fuzzy(vec, eps));
    return rcpp_result_gen;
END_RCPP
}
// quantile_value
Rcpp::NumericVector quantile_value(arma::rowvec x, int clusters);
RcppExport SEXP _ClusterR_quantile_value(SEXP xSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_value(x, clusters));
    return rcpp_result_gen;
END_RCPP
}
// duplicated_flag
bool duplicated_flag(arma::uvec x);
RcppExport SEXP _ClusterR_duplicated_flag(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(duplicated_flag(x));
    return rcpp_result_gen;
END_RCPP
}
// quantile_init_rcpp
arma::uvec quantile_init_rcpp(arma::mat data, int sample_rows, int clusters);
RcppExport SEXP _ClusterR_quantile_init_rcpp(SEXP dataSEXP, SEXP sample_rowsSEXP, SEXP clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_rows(sample_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type clusters(clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(quantile_init_rcpp(data, sample_rows, clusters));
    return rcpp_result_gen;
END_RCPP
}
// check_medoids
arma::vec check_medoids(arma::mat data, int clust, double tol);
RcppExport SEXP _ClusterR_check_medoids(SEXP dataSEXP, SEXP clustSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type clust(clustSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(check_medoids(data, clust, tol));
    return rcpp_result_gen;
END_RCPP
}
// SCALE
arma::mat SCALE(arma::mat data, bool mean_center, bool sd_scale);
RcppExport SEXP _ClusterR_SCALE(SEXP dataSEXP, SEXP mean_centerSEXP, SEXP sd_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type mean_center(mean_centerSEXP);
    Rcpp::traits::input_parameter< bool >::type sd_scale(sd_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(SCALE(data, mean_center, sd_scale));
    return rcpp_result_gen;
END_RCPP
}
