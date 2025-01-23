#include <iostream>
#include <vector>

int main() {
  // Problematic code:
  std::vector<bool> boolVector(10);
  for (size_t i = 0; i < boolVector.size(); ++i) {
    boolVector[i] = true;
  }

  // Correct approach, avoid std::vector<bool> unless you are absolutely certain of its behavior
  std::vector<char> charVector(10);
    for (size_t i = 0; i < charVector.size(); ++i) {
    charVector[i] = 1; // Use a single byte
  }

  // Or std::bitset if you need bit manipulation
  std::bitset<10> bitsetVector;
  bitsetVector.set(); // Set all bits to 1
  
  return 0;
}
