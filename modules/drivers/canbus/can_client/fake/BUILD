load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")
load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "fake_can_client",
    srcs = ["fake_can_client.cc"],
    hdrs = ["fake_can_client.h"],
    deps = [
        "//modules/common_msgs/basic_msgs:error_code_cc_proto",
        "//modules/drivers/canbus/can_client",
    ],
)

cc_test(
    name = "fake_can_client_test",
    size = "small",
    srcs = ["fake_can_client_test.cc"],
    deps = [
        "//cyber",
        "//modules/drivers/canbus/can_client/fake:fake_can_client",
        "//modules/drivers/canbus/common:canbus_common",
        "@com_google_googletest//:gtest_main",
    ],
)

cpplint()
