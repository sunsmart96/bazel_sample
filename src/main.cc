// Copyright (c) [2025] [gaoming]
// All rights reserved.
//
// This code is licensed under the MIT License. See LICENSE file for details.
//

#include <json/json.h>

#include <iostream>

#include "my_lib/my_lib.h"

int main() {
  hello();
  Json::Value root;

  root["example"] = "Hello, jsoncpp!";
  std::cout << root << std::endl;

  std::cout << "main-1" << std::endl;
  return 0;
}
