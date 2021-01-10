// Example taken from the Eigen documentation.
#include "catch2/catch.hpp"
#include "spdlog/spdlog.h"
// Using spdlog to display Eigen matrices raises an error. The inclusion of
// "fmt/ostream.h" is necessary to avoid it. See https://github.com/fmtlib/fmt/issues/794.
#include "fmt/ostream.h"  
#include "Eigen/Dense"


TEST_CASE( "Coefficient accessors", "[eigen]" ) {
  Eigen::MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  spdlog::info("Here is the matrix m:\n{}", m);
  Eigen::VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  spdlog::info("Here is the vector v:\n{}", v );
}