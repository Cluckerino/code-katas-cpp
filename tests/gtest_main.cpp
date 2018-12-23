// Main runner for the Google Test

#include <gtest/gtest.h>

// Run all included tests.
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
