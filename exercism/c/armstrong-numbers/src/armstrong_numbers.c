#include "armstrong_numbers.h"
#include <limits.h>

// An [Armstrong number](https://en.wikipedia.org/wiki/Narcissistic_number) is a number that is the sum of its own digits each raised to the power of the number of digits.
bool is_armstrong_number(int candidate){
  // number thats the sum of its own digits each raise to the power of the number of digits

  // find number of digits 
//  int digits;

  // raise to the power and add 

  // return is equal

  candidate += 1;
  return false;
}


int num_digits(int number) {
  if (number < 0 ) {
    // use INT_MIN and INT_MAX here because we have different boundaries
    if (number == INT_MIN) {
      return num_digits(INT_MAX);
    }
    return num_digits(-number);
  }

  if (number < 10 ) {
    return 1;
  }
 
  return 1 + num_digits(number / 10);
}
