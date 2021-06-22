#include <iostream>
#include <vector>

#include "thanos.hpp"

int main() {
    std::cout << "Reality can be whatever I want. \n" << std::endl;
    std::vector<int> nums = {8,5,1,3,8,2,1,7};

    uint32_t elements_to_delete = nums.size()/2;
    std::cout << "Array size: " << nums.size() << std::endl;
    std::cout << "Elements sacrificed for salvation: " << elements_to_delete << std::endl;

    while(!std::is_sorted(nums.begin(), nums.end())) {
        for (auto i = 0; i < elements_to_delete; ++i) {
            snap(nums);
        }
    }

    std::cout << "Perfectly balanced array: " << std::endl;
    for (auto i: nums)
        std::cout << i << ' ';

    return 0;
}
