#!/bin/bash  

# 检查 clang-format  
echo "Checking code format with clang-format..."  
FORMAT_FILES=$(find . -iname "*.cc" -o -iname "*.h")  

if [ -n "$FORMAT_FILES" ]; then  
    # 如果存在需要格式化的文件  
    if clang-format -n --style=Google $FORMAT_FILES; then  
        echo "clang-format check passed."  
    else  
        echo "clang-format check failed. Formatting changes needed."  
        # 自动格式化  
        clang-format -i --style=Google $FORMAT_FILES  
    fi  
else  
    echo "No C++ files to check."  
fi  

# 检查 cpplint  
echo "Checking code style with cpplint..."  
if cpplint $FORMAT_FILES; then  
    echo "cpplint check passed."  
else  
    echo "cpplint found issues. Please resolve them."  
    exit 1  
fi  