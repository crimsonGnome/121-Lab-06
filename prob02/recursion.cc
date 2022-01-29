// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "recursion.h"

bool IsEven(int value) {
  // TODO: Fill this in with a recursive solution!
  // The starter code returns false to ensure it will compile, you should delete
  // Base Cases
  // base Cae 1
  if (value == 0) {
    // Base case if true
    return true;
  } else if (value == -1) {
    // base case if odd
    return false;
  } else {
    // recursive Case
    return IsEven(value - 2);
  }
}

int RaiseIntToPower(int value, int power) {
  // TODO: Fill this in with a recursive solution!
  // The starter code returns 0 to ensure it will compile, you should delete
  // this and implement your own solution.
  // Base case
  if (power == 0) {
    return 1;
  }

  return value * RaiseIntToPower(value, power - 1);
}

int SumArray(std::vector<int> array, int start_index) {
  // TODO: Fill this in with a recursive solution!
  // The starter code returns 0 to ensure it will compile, you should delete
  // this and implement your own solution.
  if (start_index >= array.size()) {
    return 0;
  }
  return array[start_index] + SumArray(array, start_index + 1);
}
