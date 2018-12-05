#include "../solutions/count_pos_sum_neg.h"
#include <gtest/gtest.h>

TEST(CountPositivesSumNegatives, Positives) {
    std::vector<int> input {1, 2, 3};
    std::vector<int> expected {3, 0};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}

TEST(CountPositivesSumNegatives, Negatives) {
    std::vector<int> input {-1, -2, -3};
    std::vector<int> expected {0, -6};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}

TEST(CountPositivesSumNegatives, Zeroes) {
    std::vector<int> input {0, 0, 0};
    std::vector<int> expected {0, 0};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}

TEST(CountPositivesSumNegatives, Empty) {
    std::vector<int> input {};
    std::vector<int> expected {};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}

TEST(CountPositivesSumNegatives, KataEx1) {
    std::vector<int> input {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
    std::vector<int> expected {10, -65};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}

TEST(CountPositivesSumNegatives, KataEx2) {
    std::vector<int> input {0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14};
    std::vector<int> expected {8, -50};
    auto result = countPositivesSumNegatives(input);
    EXPECT_EQ(result, expected);
}