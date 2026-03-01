#include <Arduino.h>
#include <unity.h>
#include "throttle_utils.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_smoke_true(void) {
    TEST_ASSERT_TRUE(true);
}

void test_multi_throttle_index_from_char_valid_range(void) {
    TEST_ASSERT_EQUAL_INT(0, multiThrottleIndexFromChar('0'));
    TEST_ASSERT_EQUAL_INT(3, multiThrottleIndexFromChar('3'));
    TEST_ASSERT_EQUAL_INT(5, multiThrottleIndexFromChar('5'));
}

void test_multi_throttle_index_from_char_out_of_range_defaults_to_zero(void) {
    TEST_ASSERT_EQUAL_INT(0, multiThrottleIndexFromChar('6'));
    TEST_ASSERT_EQUAL_INT(0, multiThrottleIndexFromChar('x'));
    TEST_ASSERT_EQUAL_INT(0, multiThrottleIndexFromChar('/'));
}

void test_multi_throttle_char_from_index(void) {
    TEST_ASSERT_EQUAL_INT('0', multiThrottleCharFromIndex(0));
    TEST_ASSERT_EQUAL_INT('4', multiThrottleCharFromIndex(4));
    TEST_ASSERT_EQUAL_INT('9', multiThrottleCharFromIndex(9));
}

void test_multi_throttle_round_trip_for_valid_indices(void) {
    for (int index = 0; index <= 5; index++) {
        char asChar = multiThrottleCharFromIndex(index);
        int roundTrip = multiThrottleIndexFromChar(asChar);
        TEST_ASSERT_EQUAL_INT(index, roundTrip);
    }
}

void setup() {
    delay(2000);
    UNITY_BEGIN();
    RUN_TEST(test_smoke_true);
    RUN_TEST(test_multi_throttle_index_from_char_valid_range);
    RUN_TEST(test_multi_throttle_index_from_char_out_of_range_defaults_to_zero);
    RUN_TEST(test_multi_throttle_char_from_index);
    RUN_TEST(test_multi_throttle_round_trip_for_valid_indices);
    UNITY_END();
}

void loop() {
}
