#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

int get_random_index(int size_of_array);
void snap(std::vector<int>& vec);

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

int get_random_index(uint32_t size_of_array){
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int32_t> dist(0, size_of_array);
    return dist(mt);
}

void snap(std::vector<int>& vec){
    uint32_t adjusted_vec_size = vec.size() - 1;
    int random_index = get_random_index(adjusted_vec_size);
    std::cout << "Random index: " << random_index << std::endl;
    vec.erase(vec.begin() + random_index);

}
