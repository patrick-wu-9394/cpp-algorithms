#include <gtest/gtest.h>
#include "Algorithms.h"
#include "NumberGenerator.h"

TEST(BubbleSort, IntsAscending) {
    auto v = NumberGenerator::GenerateRandomInts(10, -100, 100);
    algorithms::bubbleSort(v, true);
    for (auto itr = v.begin(); itr != --v.end(); ++itr) {
        EXPECT_LE(*itr, *(itr + 1));
    }
}

TEST(BubbleSort, IntsDescending) {
    auto v = NumberGenerator::GenerateRandomInts(10, -100, 100);
    algorithms::bubbleSort(v, false);
    for (auto itr = v.begin(); itr != --v.end(); ++itr) {
        EXPECT_GE(*itr, *(itr + 1));
    }
}