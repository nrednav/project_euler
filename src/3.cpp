// Problem 3 - Largest Prime Factor

#include "Main.h"

void prime_factorize(long long &n, vector<int> &prime_factors);

int main() {

  long long n = 600851475143;

  vector<int> prime_factors;
  prime_factorize(n, prime_factors);

  cout << *max_element(prime_factors.begin(), prime_factors.end()) << endl;

  return 0;
}

void prime_factorize(long long &n, vector<int> &prime_factors) {
  for (int i = 2; i <= sqrt(n); i++) {
    while (n % i == 0) {
      prime_factors.push_back(i);
      n /= i;
    }
  }
  
  if (n > 1)
    prime_factors.push_back(n);
}