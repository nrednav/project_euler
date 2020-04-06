// 6 - Sum square difference

#include "Main.h"

int main()
{
  int count = 100;
  int sum_of_squares = 0;
  int sum = 0;

  for (int i = 1; i <= count; i++) {
    sum_of_squares += i*i;
    sum += i;
  }

  int difference = (sum * sum) - sum_of_squares;

  cout << difference << endl;

  return 0;
}