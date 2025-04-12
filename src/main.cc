// main.cpp  
#include "my_lib.h"  
#include <json/json.h>
#include <iostream>

int main() {  
    hello();

    Json::Value root;  
    root["example"] = "Hello, jsoncpp!";  
    
    std::cout << root << std::endl;    
    return 0;  
}  