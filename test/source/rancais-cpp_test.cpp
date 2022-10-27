#include "rancais-cpp/rancais-cpp.hpp"

auto main() -> int
{
  auto const result = name();

  return result == "rancais-cpp" ? 0 : 1;
}
