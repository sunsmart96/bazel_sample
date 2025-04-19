// Copyright (c) [2025] [gaoming]
// All rights reserved.
//
// This code is licensed under the MIT License. See LICENSE file for details.
//

#include <json/json.h>

#include <iostream>

#include "custom/custom.h"
#include "testlib/testlib.h"

int main() {
  hello();
  Json::Value root;

  root["example"] = "Hello, jsoncpp!";
  std::cout << root << std::endl;

  std::cout << "main-1" << std::endl;

  test::hello();
  return 0;
}
