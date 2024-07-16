#include <gtest/gtest.h>
#include "Algorithms.h"

TEST(FibonacciTest, Trivial0) {
    int input = 0;
    int output = algorithms::fibonacciSequence(input);
    EXPECT_EQ(input, output);
}

TEST(FibonacciTest, Trivial1) {
    int input = 1;
    int output = algorithms::fibonacciSequence(input);
    EXPECT_EQ(input, output);
}

TEST(FibonacciTest, Sequence11) {
    int input = 11;
    int output = algorithms::fibonacciSequence(input);
    EXPECT_EQ(output, 89);
}

TEST(FibonacciTest, Sequence19) {
    int input = 19;
    int output = algorithms::fibonacciSequence(input);
    EXPECT_EQ(output, 4181);
}