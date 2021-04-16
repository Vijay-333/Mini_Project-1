#include "Phone_Header.h"
#include "Test_Header.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_create_record(void)
{
  TEST_ASSERT_EQUAL(1, create_record());
}

void test_delete_record(void)
{
  TEST_ASSERT_EQUAL(1, create_record());
  TEST_ASSERT_EQUAL(1, delete_record());
}

void test_modify_record(void)
{
  TEST_ASSERT_EQUAL(1, create_record());
  TEST_ASSERT_EQUAL(1, modify_record());
  TEST_ASSERT_EQUAL(1, delete_record());
}

void test_search_record(void)
{
  TEST_ASSERT_EQUAL(1, create_record());
  TEST_ASSERT_EQUAL(1, search_record());
  TEST_ASSERT_EQUAL(1, delete_record());
}

void test_list_record(void)
{
  TEST_ASSERT_EQUAL(1, list_record());
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_create_record);
  RUN_TEST(test_delete_record);
  RUN_TEST(test_modify_record);
  RUN_TEST(test_search_record);
  RUN_TEST(test_list_record);

  /* Close the Unity Test Framework */
  return UNITY_END();
}