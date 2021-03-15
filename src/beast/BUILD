load("//bazel:cc_wrapper.bzl", "cc_binary_wrapper", "cc_library_wrapper")

# TODO(lschneider): Find a way to set warning_as_errors to true.
cc_library_wrapper(
  name = "boost_beast",
  srcs = ["boost_beast.cc"],
  hdrs = ["boost_beast.h"],
  deps = [
    "@boost//:beast",
  ],
  warnings_as_errors = False
)

cc_binary_wrapper(
  name = "main",
  srcs = ["main.cc"],
  deps = [
    "@com_github_spdlog//:spdlog",
    ":boost_beast",
  ],
  warnings_as_errors = True
)