#include <iostream>

bool is_prime_number(int number) {
  int factors = 0;

  if (number == 1) {
    return true;
  }

  // we're gonna define it here
  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      factors++;
    }
  }

  return factors == 2;
}

int main() {
  for (int i = 1; i <= 100; i++) {
    bool is_prime = is_prime_number(i);

    if (is_prime) {
      std::cout << i << " is Prime." << std::endl;
    } else {
      std::cout << i << " is not Prime." << std::endl;
    }
  }

  return 0;
}