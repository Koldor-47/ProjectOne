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
    
    day3_data = sortNUmber(day3_data, "1");

    for (int i = 0; i < day3_data.size(); i++){
        std::cout << day3_data[i][0] << std::endl;
    }


}

std::vector<std::string> sortNUmber(std::vector<std::string> inPut_data, std::string MostCommon){
    std::iterator it = inPut_data.begin();


    return inPut_data;   
}

int mostCommonBit(std::vector<std::string> colOfBits, bool mostCommon) {
    
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

        } else if (Ones < Zeros) {
            return 0;
        } else if (Ones == Zeros) {
            if (mostCommon) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 99;
        }
    
    }
    return 99;
}
