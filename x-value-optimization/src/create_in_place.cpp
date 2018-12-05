#include <array>
#include <iostream>
#include <vector>

typedef std::array<int, 100> BigArray;

int main()
{
  std::vector<BigArray> big_array_vector;
  const int VECTOR_COUNT = 10000000;
  //big_array_vector.reserve(VECTOR_COUNT);

  for (int i = 0; i < VECTOR_COUNT; i++)
  {
    big_array_vector.emplace_back();
    big_array_vector.back().fill(random() % 100);
  }

  return 0;
}
