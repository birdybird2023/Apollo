## Auto generated by `proto_build_generator.py`
load("@rules_proto//proto:defs.bzl", "proto_library")
load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("//tools:python_rules.bzl", "py_proto_library")

package(default_visibility = ["//visibility:public"])

cc_proto_library(
    name = "devkit_cc_proto",
    deps = [
        ":devkit_proto",
    ],
)

proto_library(
    name = "devkit_proto",
    srcs = ["devkit.proto"],
)

py_proto_library(
    name = "devkit_py_pb2",
    deps = [
        ":devkit_proto",
    ],
)