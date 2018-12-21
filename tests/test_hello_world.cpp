#include "../solutions/hello_world.h"
#include <gtest/gtest.h>

TEST(HelloWorldTest, Output)
{
    EXPECT_STREQ(HelloWorld().c_str(), "Hello World!\n");
}