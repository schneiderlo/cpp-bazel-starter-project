load("@rules_cc//cc:defs.bzl", "cc_library")
load("//bazel:compile_flags.bzl", "get_cxx_warnings")

cc_library(
  name = "hello-time",
  srcs = ["hello-time.cc"],
  hdrs = ["hello-time.h"],
  deps = [
    "//legacy/some-lib:some-lib"
  ],
  copts = get_cxx_warnings(
    warnings_as_errors = True,
    compiler = "msvc"
  ),
  visibility = ["//main:__pkg__"]
)
