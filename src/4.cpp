// 4 - Largest palindrome product

#include "Main.h"

bool is_palindrome(int n);

int main() {

  int largest_product = 0;
  int factors[2] {0, 0};

  for (int i = 999; i >= 100; i--) {
    for (int j = 999; j >= 100; j--) {
      int product = i * j;

      if (product <= largest_product)
        break;

      if (is_palindrome(product) && product > largest_product) {
        largest_product = product;
        factors[0] = i;
        factors[1] = j;
      }
    }
  }

  cout << "Largest product: " << largest_product << endl;
  cout << "Factors: " << factors[0] << ", " << factors[1] << endl;

  return 0;
}

bool is_palindrome(int n) {
  string number = to_string(n);

  for (int i = 0; i <= number.length()/2; i++) {
    int left_index = i;
    int right_index = number.length() - 1 - i;
    if (number[left_index] != number[right_index])
      return false;
  }

  return true;
}