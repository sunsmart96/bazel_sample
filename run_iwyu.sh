#!/bin/bash  

# 指定源文件和输出文件  
SOURCE_FILE="$1"  
IWYU_OUTPUT="$(include-what-you-use -I . -std=c++17 "$SOURCE_FILE")"  

# 输出 IWYU 建议  
echo "$IWYU_OUTPUT"  