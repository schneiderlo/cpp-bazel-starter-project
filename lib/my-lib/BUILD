load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "hello-time",
  srcs = ["hello-time.cc"],
  hdrs = ["hello-time.h"],
  deps = [
    "//legacy/some-lib:some-lib"
  ],
  visibility = ["//main:__pkg__"]
)
