load("//bazel:cc_wrapper.bzl", "cc_library_wrapper")

cc_library_wrapper(
  name = "hello-time",
  srcs = ["hello-time.cc"],
  hdrs = ["hello-time.h"],
  deps = [
    "//legacy/some-lib:some-lib"
  ],
  visibility = ["//main:__pkg__"]
)
