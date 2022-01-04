
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "day1/day1.h"
#include "day2/day2.h"

std::vector<int> readTxt_to_int(std::string filePath);
std::vector<std::string> readTxt(std::string filePath);

int main(int, char**) {
    //day 1

    std::vector<int> day1_data = readTxt_to_int("../day1/Day1_data.txt");
    day1puzzle1(day1_data);
    day1Puzzle2(day1_data);

    // Day 2

    std::vector<std::string> day2_data = readTxt("../day2/day2_data.txt");
    day2puzzle1(day2_data);
    day2puzzle2(day2_data);

    do {
        std::cout << "Press Any Key to finsh...." << std::endl;
    } while (std::cin.get() != '\n');

    return 0;
}

std::vector<std::string> readTxt(std::string filePath) {
    std::vector<std::string> outData;
    std::string line;
    std::fstream openFile;

    openFile.open(filePath);
    if (openFile.good()) {
        while (std::getline(openFile, line)) {
            outData.push_back(line);
        }
        openFile.close();
    } else {
        std::cerr << "can't Load File" << std::endl;
    }

    return outData;
}

std::vector<int> readTxt_to_int(std::string filePath) {
    std::vector<int> outData;
    std::string line;
    std::fstream openFile;
    openFile.open(filePath);
    if (openFile.is_open()) {
            while (std::getline(openFile, line)) {
                int aLine = std::stoi(line);
                outData.push_back(aLine);
            }
        openFile.close();
    }
    else{
        std::cerr << "No File Found!" << std::endl;
    }

    return outData;
}