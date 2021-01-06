#include <ctime>
#include <iostream>

#include "legacy/some-lib/include/some-lib.h"

void print_localtime() {
  print_some_lib();
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}