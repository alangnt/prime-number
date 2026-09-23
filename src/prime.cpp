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