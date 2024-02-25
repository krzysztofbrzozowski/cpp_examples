#include <iostream>
#include "tbd_url.h"

#include <string>

int main() {
    URL url("http", "example.com/index.html");
	url.print();
}

/*
ERROR TO BE FIXED - INVESTIGATED

ld: Undefined symbols:
  URL::URL(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> const&), referenced from:
      _main in tbd_url_test-f0f3fb.o
  URL::print() const, referenced from:
      _main in tbd_url_test-f0f3fb.o
clang: error: linker command failed with exit code 1 (use -v to see invocation)
*/