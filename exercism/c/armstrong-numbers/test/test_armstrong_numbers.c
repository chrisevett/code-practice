#include "vendor/unity.h"
#include "../src/armstrong_numbers.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_num_digits_zero(void)
{
   TEST_ASSERT_EQUAL_INT(1,num_digits(0));
}

static void test_num_digits_one(void)
{
   TEST_ASSERT_EQUAL_INT(1,num_digits(1));
}

static void test_num_digits_ten(void)
{
   TEST_ASSERT_EQUAL_INT(2,num_digits(10));
}

static void test_num_digits_thousand(void)
{
   TEST_ASSERT_EQUAL_INT(4,num_digits(1000));
}

static void test_num_digits_negative_one(void)
{
   TEST_ASSERT_EQUAL_INT(1,num_digits(-5));
}

static void test_single_digit_numbers_are_armstrong_numbers(void)
{
   TEST_IGNORE();               // delete this line to run test
   TEST_ASSERT_TRUE(is_armstrong_number(5));
}

static void test_there_are_no_two_digit_armstrong_numbers(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(is_armstrong_number(10));
}

static void test_three_digit_number_that_is_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(is_armstrong_number(153));
}

static void test_three_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(is_armstrong_number(100));
}

static void test_four_digit_number_that_is_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(is_armstrong_number(9474));
}

static void test_four_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(is_armstrong_number(9475));
}

static void test_seven_digit_number_that_is_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_TRUE(is_armstrong_number(9926315));
}

static void test_seven_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_IGNORE();
   TEST_ASSERT_FALSE(is_armstrong_number(9926314));
}

int main(void)
{
   UnityBegin("test/test_armstrong_numbers.c");

   RUN_TEST(test_single_digit_numbers_are_armstrong_numbers);
   RUN_TEST(test_there_are_no_two_digit_armstrong_numbers);
   RUN_TEST(test_three_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_three_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_four_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_four_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_seven_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_seven_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_num_digits_zero);
   RUN_TEST(test_num_digits_one);
   RUN_TEST(test_num_digits_ten);
   RUN_TEST(test_num_digits_thousand);
   RUN_TEST(test_num_digits_negative_one);

   return UnityEnd();
}
