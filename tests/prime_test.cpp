#include "prime.h"
#include <gtest/gtest.h>

TEST(PrimeTest, TwoIsPrime) {
  EXPECT_TRUE(is_prime_number(2));
}

TEST(PrimeTest, FourIsNotPrime) {
  EXPECT_FALSE(is_prime_number(4));
}

TEST(PrimeTest, SeventeenIsPrime) {
  EXPECT_TRUE(is_prime_number(17));
}