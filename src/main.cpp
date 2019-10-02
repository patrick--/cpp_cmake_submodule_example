#include <iostream>
#include "httplib.h"

int main() {
  std::cout << "Main launched!!" << std::endl;
  std::cout << "Using external resource httplib to make a get request..." << std::endl;
  
  httplib::Client cli("postman-echo.com", 80);

  auto res = cli.Get("/get");
  if (res && res->status == 200) {
      std::cout << res->body << std::endl;
  }
  
  return 0;
}
