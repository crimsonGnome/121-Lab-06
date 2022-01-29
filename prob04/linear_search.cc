// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "linear_search.h"

#include <vector>

using std::vector;

int LinearSearch(const vector<int>& x, int number, int start_index) {
  // base cases
  if (start_index >= x.size()) {
    // If index not found
    return -1;
  }

  if (x[start_index] == number) {
    // If index matches number return index
    return start_index;
  }

  // Recursive Case
  return LinearSearch(x, number, start_index + 1);
}
