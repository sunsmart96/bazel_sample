// main.cpp
#include <json/json.h>

#include <iostream>

#include "my_lib.h"

int main() {
  hello();
  Json::Value root;

  root["example"] = "Hello, jsoncpp!";
  std::cout << root << std::endl;
  return 0;
}