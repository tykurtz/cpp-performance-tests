#include <array>
#include <iostream>
#include <random>
#include <vector>

#include <assert.h>

typedef std::array<int, 10000> BigArray;

int main()
{
  std::vector<BigArray> big_array_vector;
  const int VECTOR_COUNT = 10000;
  big_array_vector.reserve(VECTOR_COUNT);

  for (int i = 0; i < VECTOR_COUNT; i++)
  {
    BigArray big_array;
    big_array.fill(random() % 100);
    big_array_vector.push_back(big_array);
    assert(&big_array[0] != &(big_array_vector.back()[0])); // Verify that a copy occurred by checking the array addresses
  }

  return 0;
}
