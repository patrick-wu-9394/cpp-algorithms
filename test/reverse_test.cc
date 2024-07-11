#include <gtest/gtest.h>
#include <string>
#include "Algorithms.h"
#include "NumberGenerator.h"

TEST(ReverseTest, Palindrome) {
    int input = 121;
    int output = algorithms::reverseNumber(input);
    EXPECT_EQ(input, output);
}

TEST(ReverseTest, NegativeNumber) {
    int input = NumberGenerator::GenerateRandomInts(1, -100, -1)[0];
    int output = algorithms::reverseNumber(input);
    EXPECT_EQ(-1, output);
}

TEST(ReverseTest, PositiveNumber) {
    int input = 123456789;
    int output = algorithms::reverseNumber(input);

    EXPECT_EQ(987654321, output);
}
