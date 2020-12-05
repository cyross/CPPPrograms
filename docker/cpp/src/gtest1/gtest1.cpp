#include <gtest/gtest.h>

int sum(int a, int b)
{
    return a + b;
}

TEST(MyTestCase, Test001)
{
    EXPECT_EQ(3, sum(1,2));
}
