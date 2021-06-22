#include "thanos.hpp"


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

