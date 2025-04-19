sh_binary(  
    name = "check_format",  
    srcs = ["check_format.sh"],  
    deps = [],  
)

cc_library(  
    name = "testlib",  
    srcs = ["testlib/testlib.cc"],  
    hdrs = ["testlib/testlib.h"],
    visibility = ["//visibility:public"],
)

cc_binary(  
    name = "hello_world",  
    srcs = ["src/main.cc"],  
    deps = [
        ":testlib",
        "//3rd:custom",
        "@jsoncpp//:jsoncpp",  
    ],
    linkstatic = False,
)