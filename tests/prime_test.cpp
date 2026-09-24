#include "prime.h"
#include <gtest/gtest.h>

class IsPrimeParamTest    : public testing::TestWithParam<int> {};
class IsNotPrimeParamTest : public testing::TestWithParam<int> {};

TEST_P(IsPrimeParamTest, ValidatesTrue) {
    EXPECT_TRUE(is_prime_number(GetParam()));
}

TEST_P(IsNotPrimeParamTest, ValidatesFalse) {
    EXPECT_FALSE(is_prime_number(GetParam()));
}

INSTANTIATE_TEST_SUITE_P(
    Primes,
    IsPrimeParamTest,
    testing::Values(2, 3, 5, 7, 13)
);

INSTANTIATE_TEST_SUITE_P(
    Composites,
    IsNotPrimeParamTest,
    testing::Values(4, 6, 9, 15, 20)
);

INSTANTIATE_TEST_SUITE_P(
    Negatives,
    IsNotPrimeParamTest,
    testing::Values(-1, -3, -5, -7, -13)
);

TEST(PrimeTest, OneIsNotPrime) {
  EXPECT_FALSE(is_prime_number(1));
}

TEST(PrimeTest, ZeroIsNotPrime) {
  EXPECT_FALSE(is_prime_number(0));
}