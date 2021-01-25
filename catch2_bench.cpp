#include "fib.hpp"
#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

TEST_CASE("Fibonacci") {

  // now let's benchmark:
  BENCHMARK("Fibonacci 10") { return fib(25); };

  BENCHMARK("Fibonacci 20") { return fib(20); };
}

TEST_CASE("Fibonacci 2") {

  // now let's benchmark:
  BENCHMARK("Fibonacci 10a") { return fib(10); };

  BENCHMARK("Fibonacci 20b") { return fib(20); };
}
