#include "fib.hpp"
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

TEST_CASE("Fibonacci") {

  // now let's benchmark:
  BENCHMARK("test1234567890test1234567890") { return fib(10); };

}
