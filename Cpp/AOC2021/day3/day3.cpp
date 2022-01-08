#include "day3.h"

void day3puzzle1(std::vector<std::string> day3_data) {
    std::string gammRate = "";
    std::string epsilonRate = "";

    for (int i = 0; i < day3_data[i].size(); i++) {
        int Ones =0;
        int Zeros = 0;
        for (int j = 0; j < day3_data.size(); j++){
            if (day3_data[j][i] == '1') {
                Ones++;
            } else {
                Zeros++;
            }
        }

        if (Ones > Zeros) {
            gammRate.append("1");
            epsilonRate.append("0");

        } else {
            gammRate.append("0");
            epsilonRate.append("1");
        }
    }

    int eRate = std::stoull(epsilonRate, 0, 2);
    int gRate = std::stoull(gammRate, 0, 2);

    std::cout << "Day 3 - Puzzle 1 --> " << eRate * gRate << std::endl;
}

void day3puzzle2(std::vector<std::string> day3_data) {
    
}

int mostCommonBit(std::vector<std::string> colOfBits) {
    
    for (int i = 0; i < colOfBits[i].size(); i++) {
        int Ones =0;
        int Zeros = 0;
        for (int j = 0; j < colOfBits.size(); j++){
            if (colOfBits[j][i] == '1') {
                Ones++;
            } else {
                Zeros++;
            }
        }

        if (Ones > Zeros) {
            return 1;

        } else {
            return 0;
        }
    }
}
