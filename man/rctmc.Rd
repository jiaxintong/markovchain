\name{rctmc}
\alias{rctmc}

\title{
Function to generate a sequence of random CTMC transitions.
}
\description{
The function generates random CTMC transitions as per the provided generator matrix.
}
\usage{
rctmc(n, ctmc, initDist = numeric(), T = 0, include.T0 = TRUE, out.type = "list")
}

\arguments{
  \item{n}{
The number of samples to generate.
}
  \item{ctmc}{
The CTMC S4 object.
}
  \item{initDist}{
The initial distribution of states.
}
  \item{T}{
The time up to which the simulation runs (all transitions after time T are not returned).
}
  \item{include.T0}{
Flag to determine if start state is to be included.
}
  \item{out.type}{
"list" or "df"
}
}
\details{
In order to use the T0 argument, set n to Inf.
}
\value{
Based on out.type, a list or a data frame is returned. The returned list has two elements - a character vector (states) and a numeric vector (indicating time of transitions). The data frame is similarly structured.
}
\references{
Introduction to Stochastic Processes with Applications in the Biosciences (2013), David F. Anderson, University of Wisconsin at Madison
}
\author{
Sai Bhargav Yalamanchi
}

\seealso{
\code{\link{generatorToTransitionMatrix}},\code{\link{ctmc-class}}
}
\examples{
energyStates <- c("sigma", "sigma_star")
byRow <- TRUE
gen <- matrix(data = c(-3, 3,
                       1, -1), nrow = 2,
              byrow = byRow, dimnames = list(energyStates, energyStates))
molecularCTMC <- new("ctmc", states = energyStates, 
                 byrow = byRow, generator = gen, 
                 name = "Molecular Transition Model")   
                 
statesDist <- c(0.8, 0.2)
rctmc(n = Inf, ctmc = molecularCTMC, T = 1)
rctmc(n = 5, ctmc = molecularCTMC, initDist = statesDist, include.T0 = FALSE)
}
