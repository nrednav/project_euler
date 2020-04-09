// 12 - Highly divisible triangular number

#include "Main.h"

int count_of_divisors(int n);

int main()
{
  long long natural_num = 1,
            triangle_num = 0;

  while (count_of_divisors(triangle_num) < 500)  {
    triangle_num += natural_num;
    ++natural_num;
  }

  cout << triangle_num << endl;

  return 0;
}

int count_of_divisors(int n) {
  int count = 0;

  for (int i = 1; i <= sqrt(n); ++i) {
    if (n % i == 0)
      count += 2;
  }

  return count;
}