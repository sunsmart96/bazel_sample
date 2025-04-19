./format_code.sh

bazel clean  

# bazel build //:custom
bazel build //:testlib
bazel build //:hello_world

# cp bazel-bin/hello_world ./build
# cp bazel-bin/*.so ./build/
# cp bazel-bin/external/jsoncpp+/libjsoncpp.so ./build