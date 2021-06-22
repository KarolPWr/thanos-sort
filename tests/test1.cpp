#include "gtest/gtest.h"

#include "../main.cpp"

#include <iostream>

TEST(SquareRootTest, PositiveNos) {
    EXPECT_EQ (1,1);
    int random_index = get_random_index(50);
    std::cout<< "index :" << random_index << std::endl;
}

