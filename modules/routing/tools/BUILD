load("@rules_cc//cc:defs.bzl", "cc_binary")
load("//tools:cpplint.bzl", "cpplint")
load("//tools/install:install.bzl", "install")

package(default_visibility = ["//visibility:public"])

install(
    name = "install",
    runtime_dest = "routing/bin",
    targets = [
        ":routing_dump",
        ":routing_cast",
    ],
)

cc_binary(
    name = "routing_dump",
    srcs = ["routing_dump.cc"],
    deps = [
        "//modules/common_msgs/planning_msgs:planning_cc_proto",
        "//modules/routing",
    ],
)

cc_binary(
    name = "routing_cast",
    srcs = ["routing_cast.cc"],
    deps = [
        "//modules/routing",
    ],
)

cpplint()
