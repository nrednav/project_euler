// Problem 2 - Even fibonacci numbers

#include "Main.h"

int fib(int n);
map<int, int> cache;

int main() {

  int sum = 0;
  int term = 0;
  int value = fib(term);

  while (value <= 4'000'000) {
    if (value % 2 == 0) {
      sum += value;
    }
    term++;
    value = fib(term);
  }

  cout << sum << endl;

  return 0;
}

int fib(int n) {
  if (cache[n])
    return cache[n];

  if (n < 2)
    return n;
  
  cache[n] = fib(n-1) + fib(n-2);
  return cache[n];
}