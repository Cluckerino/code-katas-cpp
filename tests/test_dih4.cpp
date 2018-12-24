#include <gtest/gtest.h>

#include "../solutions/dih4.h"

TEST(Dih4, EqualToItself)
{
    EXPECT_TRUE(Dih4::IDENTITY == Dih4::IDENTITY);
    EXPECT_TRUE(Dih4::REFLECT_HORIZONTAL == Dih4::REFLECT_HORIZONTAL);
}

TEST(Dih4, IdentityEqual)
{
    Dih4 identity{1, 0, 0, 1};
    EXPECT_TRUE(Dih4::IDENTITY == identity);
}

TEST(Dih4, NotEqual)
{
    Dih4 a{1, 0, 0, 1};
    Dih4 b{-1, 0, 0, -1};
    EXPECT_TRUE(a != b);
}

TEST(Dih4, Inv)
{
    Dih4 input{1, 3, 2, 7};
    Dih4 expected{7, -3, -2, 1};
    auto actual = input.inv();
    EXPECT_EQ(actual, expected);
}

TEST(Dih4, Det)
{
    Dih4 input{2, -3, 1, 4};
    auto expected = 11;
    auto actual = input.det();
    EXPECT_EQ(actual, expected);
}