"""Define wrapper around bazel build rule."""
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")
load(":compile_flags.bzl", "get_cxx_warnings")

def cc_library_wrapper(
    copts = [],
    **kwargs):
  cc_library(
    copts = get_cxx_warnings() + copts,
    **kwargs)

def cc_binary_wrapper(
    copts = [],
    **kwargs):
  cc_binary(
    copts = get_cxx_warnings() + copts,
    **kwargs)

def cc_test_wrapper(
    copts = [],
    **kwargs):
  cc_test(
    copts = get_cxx_warnings() + copts,
    **kwargs)