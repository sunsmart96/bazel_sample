cc_library(  
    name = "my_lib",  
    srcs = ["my_lib/my_lib.cc"],  
    hdrs = ["my_lib/my_lib.h"],
    includes = ["my_lib"],
    visibility = ["//visibility:public"], 
)

cc_binary(  
    name = "hello_world",  
    srcs = ["src/main.cc"],  
    deps = [":my_lib"],   
)  