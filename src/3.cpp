// Problem 3 - Largest Prime Factor

#include "Main.h"

bool is_prime(int n);
void get_prime_factors(long long &n, vector<int> &prime_factors);

vector<int> primes;

int main() {

  long long n = 600851475143;

  vector<int> prime_factors;
  get_prime_factors(n, prime_factors);

  for (int factor: prime_factors) {
    cout << factor << " ";
  }

  return 0;
}

bool is_prime(int n) {
  for (int prime: primes) {
    if (prime > sqrt(n))
      break;

    if (n % prime == 0)
      return false;
  }

  primes.push_back(n);
  return true;
}

void get_prime_factors(long long &n, vector<int> &prime_factors) {
  int divisor = 2;

  while (n > 1) {
    if (is_prime(divisor)) {
      if (n % divisor == 0) {
        n /= divisor;
        prime_factors.push_back(divisor);
      }
      else divisor++;
    }
    else divisor++;
  }
}