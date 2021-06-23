#include "gtest/gtest.h"

#include "thanos.hpp"

#include <iostream>
#include <vector>

TEST(SquareRootTest, PositiveNos) {
    int val = 50;
    int random_index = get_random_index(val);
    EXPECT_TRUE((random_index >= 0) && (random_index <= val));


}

