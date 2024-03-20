#ifndef TST_square_H
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
    result = square(arr, 1, -4, 3.75);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 2.5);
    ASSERT_EQ(arr[1], 1.5);
}

TEST(square, one_root) {
    result = square(arr, 1, -6, 9);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 3);
    ASSERT_EQ(arr[1], 3);
}

TEST(square, invalid_input) {
    result = square(arr, 0, 0, 0);
    ASSERT_EQ(result, 0);
}


TEST(square, no_root) {
    result = square(arr, 1, 2, 3);
    ASSERT_EQ(result, 0);
}

#endif // TST_square_H