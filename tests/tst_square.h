#ifndef EXCLUDE_MAIN_TESTS
#define TST_square_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "square.h"
}

int result;
double arr[2];

TEST(square, right_answer) {
    result = square(arr, 1, -5, 6);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 3);
    ASSERT_EQ(arr[1], 2);
}

TEST(square, float_input_float_out) {
    result = square(arr, 2, -4, 3.75);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 2.5);
    ASSERT_EQ(arr[1], 1.5);
}

TEST(square, one_square) {
    result = square(arr, 1, -6, 9);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 2);
    ASSERT_EQ(arr[1], 2);
}

TEST(square, invalid) {
    result = square(arr, 0, 0, 0);
    ASSERT_EQ(result, 0);
}


TEST(square, no_square) {
    result = square(arr, 1, 2, 3);
    ASSERT_EQ(result, 0);
}

#endif // TST_square_H
