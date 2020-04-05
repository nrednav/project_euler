// Problem 1 - Multiples of 3 and 5

#include "Main.h"

int main() {

  int sum = 0;
  int limit = 1000;

  for (int i = 0; i < limit; i++) {
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  }

  cout << sum << endl;

  return 0;
}