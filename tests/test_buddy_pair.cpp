#include <gtest/gtest.h>

#include "../solutions/buddy_pair.h"

TEST(BuddyPair, PrintBuddyPair)
{
    std::string expected = "(1081184 1331967)";
    auto actual = print_buddy_pair(1081184, 1331967);
    EXPECT_EQ(actual, expected);
}

TEST(BuddyPair, BuddySum1)
{
    long long expected = 1331967;
    auto actual = buddy_sum(1081184);
    EXPECT_EQ(actual, expected);
}

TEST(BuddyPair, BuddySum2)
{
    long long expected = 1081184;
    auto actual = buddy_sum(1331967);
    EXPECT_EQ(actual, expected);
}

TEST(BuddyPair, KataEx1)
{
    long long start = 1071625;
    long long limit = 1103735;
    std::string expected = "(1081184 1331967)";
    auto actual = buddy(start, limit);
    EXPECT_EQ(actual, expected);
}

TEST(BuddyPair, KataEx2)
{
    long long start = 2382;
    long long limit = 3679;
    std::string expected = "Nothing";
    auto actual = buddy(start, limit);
    EXPECT_EQ(actual, expected);
}

TEST(BuddyPair, KataEx3)
{
    long long start = 8983;
    long long limit = 13355;
    std::string expected = "(9504 20735)";
    auto actual = buddy(start, limit);
    EXPECT_EQ(actual, expected);
}