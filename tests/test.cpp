#include <iostream>
#include "include\calc.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(test_group, test_1) {
    float a = 5.0, b = 6.0;
    float c=calc(a, b,'+');
    ASSERT_EQ(c, a + b);
}
TEST(test_group, test_2) {
    float a = -5.0, b = -6.0;
    float c = calc(a, b, '+');
    ASSERT_EQ(c, a + b);
}
TEST(test_group, test_3) {
    float a = 5.0;
    float c = calc(a, 0.0, '+');
    ASSERT_EQ(c,a);
}
TEST(test_group, test_4)
{    
    ASSERT_NO_THROW(calc(1.0, 2.0, '+'));
}
TEST(test_group, test_5) {
    float a = 5.0, b = 6.0;
    float c = calc(a, b, '-');
    ASSERT_EQ(c, a - b);
}
TEST(test_group, test_6) {
    float a = -5.0, b = -6.0;
    float c = calc(a, b, '-');
    ASSERT_EQ(c, a - b);
}
TEST(test_group, test_7) {
    float a = 5.0;
    float c = calc(a, 0.0, '-');
    ASSERT_EQ(c, a);
}
TEST(test_group, test_8)
{
    ASSERT_NO_THROW(calc(1.0, 2.0, '-'));
}
TEST(test_group, test_9) {
    float a = 5.0, b = 6.0;
    float c = calc(a, b, '*');
    ASSERT_EQ(c, a * b);
}
TEST(test_group, test_10) {
    float a = -5.0, b = -6.0;
    float c = calc(a, b, '*');
    ASSERT_EQ(c, a * b);
}
TEST(test_group, test_11) {
    float a = 5.0;
    float c = calc(a, 0.0, '*');
    ASSERT_EQ(c, 0.0);
}
TEST(test_group, test_12)
{
    ASSERT_NO_THROW(calc(1.0, 2.0, '*'));
}
TEST(test_group, test_13) {
    float a = 12.0, b = 6.0;
    float c = calc(a, b, '/');
    ASSERT_EQ(c, a / b);
}
TEST(test_group, test_14) {
    float a = -12.0, b = -6.0;
    float c = calc(a, b, '/');
    ASSERT_EQ(c, a / b);
}
TEST(test_group, test_15) {
    float a = 5.0;
    float c = calc(0.0,a, '/');
    ASSERT_EQ(c, 0.0);
}
TEST(test_group, test_16)
{
    ASSERT_NO_THROW(calc(1.0, 2.0, '/'));
}
//TEST(TDynamicVector, throws_when_create_vector_with_negative_length)
//{
//    ASSERT_ANY_THROW(TDynamicVector<int> v(-5));
//}

int main(int argc,char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}