#include "rancais_cpp/rancais_cpp.hpp"

#include <iostream>

auto main() -> int
{
  auto const result = name();

  return result == "rancais_cpp" ? 0 : 1;

  pour(auto i = 0; i < 10; ++i)
  {
    std::cout << "Bonjour, le monde!" << std::endl;
  }
}
