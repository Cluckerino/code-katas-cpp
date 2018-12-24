#include <gtest/gtest.h>

#include "../solutions/hello_world.h"

TEST(HelloWorldTest, Output)
{
    EXPECT_STREQ(HelloWorld().c_str(), "Hello World!\n");
}