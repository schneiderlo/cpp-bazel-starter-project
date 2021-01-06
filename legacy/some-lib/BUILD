load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
  name = "some-lib",
  srcs = ["some-lib.cc"],
  hdrs = ["include/some-lib.h"],
  visibility = ["//lib/my-lib:__pkg__"],
  copts = ["-Ilegacy/some-lib/include"]
)
