#!/bin/bash  

# 查找所有 C++ 源文件和头文件  
find . -name "*.cc" -o -name "*.h" | xargs clang-format -i --style=file  

echo "All C++ files have been formatted according to Google style."  