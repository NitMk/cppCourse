#include <limits>
#include <cstdio>

int main() {
  std::printf("Min: %f, max: %f\n",
         std::numeric_limits<float>::min(),
         std::numeric_limits<float>::max());                   
  return 0;
}