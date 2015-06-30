// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// isProb
bool isProb(double prob);
RcppExport SEXP markovchain_isProb(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type prob(probSEXP);
    __result = Rcpp::wrap(isProb(prob));
    return __result;
END_RCPP
}
// isGen
bool isGen(NumericMatrix gen);
RcppExport SEXP markovchain_isGen(SEXP genSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type gen(genSEXP);
    __result = Rcpp::wrap(isGen(gen));
    return __result;
END_RCPP
}
// canonicForm
SEXP canonicForm(S4 object);
RcppExport SEXP markovchain_canonicForm(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(canonicForm(object));
    return __result;
END_RCPP
}
// generatorToTransitionMatrix
NumericMatrix generatorToTransitionMatrix(NumericMatrix gen, bool byrow);
RcppExport SEXP markovchain_generatorToTransitionMatrix(SEXP genSEXP, SEXP byrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type gen(genSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    __result = Rcpp::wrap(generatorToTransitionMatrix(gen, byrow));
    return __result;
END_RCPP
}
// createSequenceMatrix
NumericMatrix createSequenceMatrix(CharacterVector stringchar, bool toRowProbs, bool sanitize, bool parallel);
RcppExport SEXP markovchain_createSequenceMatrix(SEXP stringcharSEXP, SEXP toRowProbsSEXP, SEXP sanitizeSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type stringchar(stringcharSEXP);
    Rcpp::traits::input_parameter< bool >::type toRowProbs(toRowProbsSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    __result = Rcpp::wrap(createSequenceMatrix(stringchar, toRowProbs, sanitize, parallel));
    return __result;
END_RCPP
}
// inferHyperparam
List inferHyperparam(NumericMatrix transMatr, NumericVector scale, CharacterVector data);
RcppExport SEXP markovchain_inferHyperparam(SEXP transMatrSEXP, SEXP scaleSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMatr(transMatrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type data(dataSEXP);
    __result = Rcpp::wrap(inferHyperparam(transMatr, scale, data));
    return __result;
END_RCPP
}
// markovchainFit
List markovchainFit(SEXP data, String method, bool byrow, int nboot, double laplacian, String name, bool parallel, double confidencelevel, NumericMatrix hyperparam);
RcppExport SEXP markovchain_markovchainFit(SEXP dataSEXP, SEXP methodSEXP, SEXP byrowSEXP, SEXP nbootSEXP, SEXP laplacianSEXP, SEXP nameSEXP, SEXP parallelSEXP, SEXP confidencelevelSEXP, SEXP hyperparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP);
    Rcpp::traits::input_parameter< double >::type laplacian(laplacianSEXP);
    Rcpp::traits::input_parameter< String >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    __result = Rcpp::wrap(markovchainFit(data, method, byrow, nboot, laplacian, name, parallel, confidencelevel, hyperparam));
    return __result;
END_RCPP
}
// commclassesKernel
SEXP commclassesKernel(NumericMatrix P);
RcppExport SEXP markovchain_commclassesKernel(SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    __result = Rcpp::wrap(commclassesKernel(P));
    return __result;
END_RCPP
}
// communicatingClasses
List communicatingClasses(LogicalMatrix adjMatr);
RcppExport SEXP markovchain_communicatingClasses(SEXP adjMatrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< LogicalMatrix >::type adjMatr(adjMatrSEXP);
    __result = Rcpp::wrap(communicatingClasses(adjMatr));
    return __result;
END_RCPP
}
// commStatesFinder
NumericMatrix commStatesFinder(NumericMatrix matr);
RcppExport SEXP markovchain_commStatesFinder(SEXP matrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type matr(matrSEXP);
    __result = Rcpp::wrap(commStatesFinder(matr));
    return __result;
END_RCPP
}
// summaryKernel
List summaryKernel(S4 object);
RcppExport SEXP markovchain_summaryKernel(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(summaryKernel(object));
    return __result;
END_RCPP
}
// firstpassageKernel
NumericMatrix firstpassageKernel(NumericMatrix P, int i, int n);
RcppExport SEXP markovchain_firstpassageKernel(SEXP PSEXP, SEXP iSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type P(PSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(firstpassageKernel(P, i, n));
    return __result;
END_RCPP
}
// gcd
int gcd(int a, int b);
RcppExport SEXP markovchain_gcd(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    __result = Rcpp::wrap(gcd(a, b));
    return __result;
END_RCPP
}
// period
int period(S4 object);
RcppExport SEXP markovchain_period(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type object(objectSEXP);
    __result = Rcpp::wrap(period(object));
    return __result;
END_RCPP
}
// predictiveDistribution
double predictiveDistribution(CharacterVector stringchar, CharacterVector newData, NumericMatrix hyperparam);
RcppExport SEXP markovchain_predictiveDistribution(SEXP stringcharSEXP, SEXP newDataSEXP, SEXP hyperparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type stringchar(stringcharSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type newData(newDataSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    __result = Rcpp::wrap(predictiveDistribution(stringchar, newData, hyperparam));
    return __result;
END_RCPP
}
// priorDistribution
NumericVector priorDistribution(NumericMatrix transMatr, NumericMatrix hyperparam);
RcppExport SEXP markovchain_priorDistribution(SEXP transMatrSEXP, SEXP hyperparamSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMatr(transMatrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    __result = Rcpp::wrap(priorDistribution(transMatr, hyperparam));
    return __result;
END_RCPP
}
// multinomCI
List multinomCI(NumericMatrix transMat, NumericMatrix seqMat, double confidencelevel);
RcppExport SEXP markovchain_multinomCI(SEXP transMatSEXP, SEXP seqMatSEXP, SEXP confidencelevelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type transMat(transMatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type seqMat(seqMatSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    __result = Rcpp::wrap(multinomCI(transMat, seqMat, confidencelevel));
    return __result;
END_RCPP
}
