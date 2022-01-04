#include "day1.h"
#include <iostream>

void day1puzzle1(std::vector<int> inData) {
    int count = 0;
    for (int i = 1; i < inData.size(); i++){
        if (inData[i] > inData[i-1]){
            ++count;
        }
    }
    std::cout << "Day 1 - Puzzle 1 --> "  << count << std::endl;
}

void day1Puzzle2(std::vector<int> inData){
    int count = 0;
    std::vector<int> threes;
    for (int i = 3; i < inData.size(); i++){
        int a = inData[i-3] + inData[i-2] + inData[i-1];
        int b = inData[i-2] + inData[i-1] + inData[i];
        if (b > a){
            ++count;
        }
    }
    
    std::cout << "Day 1 - Puzzle 2 --> "  << count << std::endl;
}