#include "prime.h"
#include <gtest/gtest.h>

TEST(PrimeTest, IsPrime) {
  EXPECT_TRUE(is_prime_number(2));
  EXPECT_TRUE(is_prime_number(3));
  EXPECT_TRUE(is_prime_number(5));
  EXPECT_TRUE(is_prime_number(7));
  EXPECT_TRUE(is_prime_number(13));
}

TEST(PrimeTest, IsNotPrime) {
  EXPECT_FALSE(is_prime_number(4));
  EXPECT_FALSE(is_prime_number(6));
  EXPECT_FALSE(is_prime_number(9));
  EXPECT_FALSE(is_prime_number(15));
  EXPECT_FALSE(is_prime_number(20));
}

TEST(PrimeTest, NegativeNumberIsNotPrime) {
  EXPECT_FALSE(is_prime_number(-1));
  EXPECT_FALSE(is_prime_number(-3));
  EXPECT_FALSE(is_prime_number(-5));
  EXPECT_FALSE(is_prime_number(-7));
  EXPECT_FALSE(is_prime_number(-13));
}

TEST(PrimeTest, ZeroIsNotPrime) {
  EXPECT_FALSE(is_prime_number(0));
}