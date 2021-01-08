load("//bazel:cc_wrapper.bzl", "cc_library_wrapper", "cc_binary_wrapper")

cc_library_wrapper(
  name = "hello-greet",
  srcs = ["hello-greet.cc"],
  hdrs = ["hello-greet.h"]
)

cc_binary_wrapper(
  name = "hello-world",
  srcs = ["hello-world.cc"],
  deps = [
    ":hello-greet",
    "//lib/my-lib:hello-time",
    "@com_github_spdlog//:spdlog",
  ]
)