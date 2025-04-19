sh_binary(  
    name = "check_format",  
    srcs = ["check_format.sh"],  
    deps = [],  
)  

cc_library(  
    name = "custom",  
    srcs = ["custom/custom.cc"],  
    hdrs = ["custom/custom.h"],
    visibility = ["//visibility:public"],
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
        ":custom",
        ":testlib",
         "@jsoncpp//:jsoncpp",  
    ], 
)  