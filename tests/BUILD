load("//bazel:cc_wrapper.bzl", "cc_test_wrapper")

cc_test_wrapper(
  name = "simple-test",
  srcs = ["my-test.cpp"],
    defines = ["CATCH_CONFIG_MAIN"],
    deps = [
        "@com_github_catch2//:catch2",
        "@com_github_fmt//:fmtlib",
        "@com_github_spdlog//:spdlog",
        "@com_github_eigen//:eigen",
    ]
)

cc_test_wrapper(
  name = "eigen-test",
  srcs = ["eigen_test.cc"],
    defines = ["CATCH_CONFIG_MAIN"],
    deps = [
        "@com_github_catch2//:catch2",
        "@com_github_fmt//:fmtlib",
        "@com_github_spdlog//:spdlog",
        "@com_github_eigen//:eigen",
    ]
)