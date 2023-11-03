#include <iostream>
#include "include\calc.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(test_group, test_1) {
    float a = 5.0, b = 6.0;
    float c=calc(a, b,'+');
    ASSERT_EQ(c, a + b);
}

int main(int argc,char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}