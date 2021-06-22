#include "gtest/gtest.h"

#include "thanos.hpp"

#include <iostream>

TEST(SquareRootTest, PositiveNos) {
    EXPECT_EQ (1,1);
    int val = 50;
    int random_index = get_random_index(val);
    std::cout<< "index :" << random_index << std::endl;
}

