#include "../solutions/xbonacci.h"
#include <gtest/gtest.h>

TEST(Xbonacci, KataEx1)
{
    std::vector<int> signature = {0, 1};
    std::vector<int> expected = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    auto actual = xbonacci(signature, 10);
    EXPECT_EQ(actual, expected);
}

TEST(Xbonacci, KataEx2)
{
    std::vector<int> signature = {1, 1};
    std::vector<int> expected = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    auto actual = xbonacci(signature, 10);
    EXPECT_EQ(actual, expected);
}