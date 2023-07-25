#include "pch.h"
#include "../SimpleTestSolution2/Adder.h"

TEST(AdderTest, TestPositiveSum) {
  EXPECT_EQ(Adder(2,2), 4);
}

TEST(AdderTest, TestNegativeSum) {
  EXPECT_EQ(Adder(-2, -2), -4);
}

TEST(AdderTest, TestPositiveNegativeSum) {
  EXPECT_EQ(Adder(2, -2), 0);
}