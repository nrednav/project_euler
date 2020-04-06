// 5 - Smallest Multiple

#include "Main.h"

int smallest_factor(const int &n);

int main()
{
  int limit = 10;
  int smallest_multiple = limit;

  for (int i = 2; i <= limit; i++) {
    if (smallest_multiple % i != 0) {
      smallest_multiple *= smallest_factor(i);
    }
  }

  cout << smallest_multiple << endl;

  return 0;
}

int smallest_factor(const int &n) {
  int smallest_factor = n;

  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      smallest_factor = i;
      break;
    }
  }

  return smallest_factor;
}