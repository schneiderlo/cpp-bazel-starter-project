load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("//bazel:compile_flags.bzl", "get_cxx_warnings")

cc_library(
  name = "hello-greet",
  srcs = ["hello-greet.cc"],
  hdrs = ["hello-greet.h"],
  copts = get_cxx_warnings(
    warnings_as_errors = True,
    compiler = "msvc"
  ),
)

cc_binary(
  name = "hello-world",
  srcs = ["hello-world.cc"],
  copts = get_cxx_warnings(
    warnings_as_errors = True,
    compiler = "msvc"
  ),
  deps = [
    ":hello-greet",
    "//lib/my-lib:hello-time",
    "@com_github_spdlog//:spdlog",
  ]
)