
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "day1.h"

std::vector<int> readTxt_to_int(std::string filePath);

int main(int, char**) {
    std::vector<int> things = readTxt_to_int("../Day1_data.txt");
    
    day1puzzle1(things);
}


std::vector<int> readTxt_to_int(std::string filePath) {
    std::vector<int> outData;
    std::string line;
    std::fstream openFile;
    openFile.open(filePath);
    if (openFile.is_open()) {
            while (openFile) {
                std::getline(openFile, line);
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