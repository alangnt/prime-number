bool is_prime_number(int number) {
  int factors = 0;

  if (number <= 0) {
    return false;
  }

  if (number == 1) {
    return true;
  }

  for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
      factors++;
    }

    // no need to go further if already more than 2
    if (factors > 2) {
      break;
    }
  }

  return factors == 2;
}