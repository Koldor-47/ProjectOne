
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "day1/day1.h"
#include "day2/day2.h"
#include "day3/day3.h"
#include "utils/utils.h"



int main(int, char**) {
    //day 1

    std::vector<int> day1_data = readTxt_to_int("../day1/Day1_data.txt");
    day1puzzle1(day1_data);
    day1Puzzle2(day1_data);

    // Day 2

    std::vector<std::string> day2_data = readTxt("../day2/day2_data.txt");
    day2puzzle1(day2_data);
    day2puzzle2(day2_data);

    //day 3

    std::vector<std::string> day3_data = readTxt("../day3/data.txt");
    day3puzzle1(day3_data);
    day3puzzle2(day3_data);

    do {
        std::cout << "Press Any Key to finsh...." << std::endl;
    } while (std::cin.get() != '\n');

    return 0;
}

