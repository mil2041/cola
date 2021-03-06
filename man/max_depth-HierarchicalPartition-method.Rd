\name{max_depth-HierarchicalPartition-method}
\alias{max_depth,HierarchicalPartition-method}
\alias{max_depth}
\title{
Max depth of the hierarchy
}
\description{
Max depth of the hierarchy
}
\usage{
\S4method{max_depth}{HierarchicalPartition}(object)
}
\arguments{

  \item{object}{A \code{\link{HierarchicalPartition-class}} object.}

}
\value{
A numeric value.
}
\author{
Zuguang Gu <z.gu@dkfz.de>
}
\examples{
data(golub_cola_rh)
max_depth(golub_cola_rh)
}
