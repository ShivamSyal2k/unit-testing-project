#include <gtest/gtest.h>
#include "Example.hpp"

TEST(MultiplyTests, Positive) {
    EXPECT_EQ(multiply(2, 3), 6);
}

TEST(MultiplyTests, Zero) {
    EXPECT_EQ(multiply(0, 10), 0);
}

TEST(MultiplyTests, Negative) {
    EXPECT_EQ(multiply(-2, -3), 6);
    EXPECT_EQ(multiply(-2, 3), -6);
}