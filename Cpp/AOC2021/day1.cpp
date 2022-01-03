#include "day1.h"
#include <iostream>

void day1puzzle1(std::vector<int> inData) {
    std::cout << "testing :/" << std::endl; 

    int count = 0;
    for (int i = 1; i < inData.size(); i++){
        if (inData[i] > inData[i-1]){
            ++count;
        }
    }
    std::cout << count << std::endl;
}