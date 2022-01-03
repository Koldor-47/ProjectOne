#include <iostream>
#include <string>
#include <vector>
#include <random>

int main(int, char**) {
    std::vector<std::string> names {"nick", "Penny", "Bri", "Maggie", "jonh"};
    std::random_device random_device;
    std::mt19937 engine{random_device()};

    std::uniform_int_distribution<int> dist(0, names.size()-1);
    
    std::cout << "Hello, " << names[dist(engine)] << "!\n" << std::endl;
}
