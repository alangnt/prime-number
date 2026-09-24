#include "prime.h"
#include <iostream>

int main() {
  int value = 2;

  bool is_prime = is_prime_number(value);

  if (is_prime) {
    std::cout << value << " is Prime." << std::endl;
  } else {
    std::cout << value << " is not Prime." << std::endl;
  }

  return 0;
}