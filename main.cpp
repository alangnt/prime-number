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
  int value = 2;

  bool is_prime = is_prime_number(value);

  if (is_prime) {
    std::cout << value << " is Prime." << std::endl;
  } else {
    std::cout << value << " is not Prime." << std::endl;
  }

  return 0;
}