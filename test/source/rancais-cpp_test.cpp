#include "rancais-cpp/rancais-cpp.hpp"

#include <iostream>

auto main() -> int
{
  auto const result = name();

  return result == "rancais-cpp" ? 0 : 1;

  pour(auto i = 0; i < 10; ++i)
  {
    std::cout << "Bonjour, le monde!" << std::endl;
  }
}
