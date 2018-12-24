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