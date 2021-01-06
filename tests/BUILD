load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "simple-test",
  srcs = ["my-test.cpp"],
    defines = ["CATCH_CONFIG_MAIN"],
    deps = [
        "@com_github_catch2//:catch2",
        "@com_github_fmt//:fmtlib",
        "@com_github_spdlog//:spdlog",
    ]
)