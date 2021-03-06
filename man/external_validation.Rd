% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/clustering_functions.R
\name{external_validation}
\alias{external_validation}
\title{external clustering validation}
\usage{
external_validation(true_labels, clusters, method = "adjusted_rand_index",
  summary_stats = FALSE)
}
\arguments{
\item{true_labels}{a numeric vector of length equal to the length of the clusters vector}

\item{clusters}{a numeric vector ( the result of a clustering method ) of length equal to the length of the true_labels}

\item{method}{one of \emph{rand_index},  \emph{adjusted_rand_index},  \emph{jaccard_index},  \emph{fowlkes_Mallows_index},  \emph{mirkin_metric},  \emph{purity},  \emph{entropy},  \emph{nmi} (normalized mutual information), \emph{var_info} (variation of information), and \emph{nvi} (normalized variation of information)}

\item{summary_stats}{besides the available methods the summary_stats parameter prints also the specificity, sensitivity, precision, recall and F-measure of the clusters}
}
\value{
if summary_stats is FALSE the function returns a float number, otherwise it returns also a summary statistics table
}
\description{
external clustering validation
}
\details{
This function uses external validation methods to evaluate the clustering results
}
\examples{

data(dietary_survey_IBS)

dat = dietary_survey_IBS[, -ncol(dietary_survey_IBS)]

X = center_scale(dat)

km = KMeans_rcpp(X, clusters = 2, num_init = 5, max_iters = 100, initializer = 'optimal_init')

res = external_validation(dietary_survey_IBS$class, km$clusters, method = "adjusted_rand_index")

}
\author{
Lampros Mouselimis
}
