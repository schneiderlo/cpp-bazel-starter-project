#include <string>
#include <iostream>

#include "spdlog/spdlog.h"

#include "lib/my-lib/hello-time.h"
#include "hello-greet.h"


int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  spdlog::info("Greetings {} !", "stranger");
  return 0;
}