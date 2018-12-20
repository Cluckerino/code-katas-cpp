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

TEST(Xbonacci, KataEx3)
{
    std::vector<int> signature = {0, 0, 0, 0, 1};
    std::vector<int> expected = {0, 0, 0, 0, 1, 1, 2, 4, 8, 16};
    auto actual = xbonacci(signature, 10);
    EXPECT_EQ(actual, expected);
}

TEST(Xbonacci, KataEx4)
{
    std::vector<int> signature = {1, 0, 0, 0, 0, 0, 1};
    std::vector<int> expected = {1, 0, 0, 0, 0, 0, 1, 2, 3, 6};
    auto actual = xbonacci(signature, 10);
    EXPECT_EQ(actual, expected);
}

TEST(Xbonacci, KataEx5)
{
    std::vector<int> signature = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    std::vector<int> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 4, 8, 16, 32, 64, 128, 256};
    auto actual = xbonacci(signature, 20);
    EXPECT_EQ(actual, expected);
}

TEST(Xbonacci, KataEx6)
{
    std::vector<int> signature = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto actual = xbonacci(signature, 9);
    EXPECT_EQ(actual, expected);
}

TEST(Xbonacci, KataEx7)
{
    std::vector<int> signature = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::vector<int> expected = {};
    auto actual = xbonacci(signature, 0);
    EXPECT_EQ(actual, expected);
}