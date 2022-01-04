#include <iostream>
#include <sstream>
#include "day2.h"


void day2puzzle1(std::vector<std::string>& inData)
{
    int position = 0;
    int depth = 0;
    

    for (auto line : inData) {
        std::stringstream dAndP(line);
        std::vector<std::string> message;
        while (dAndP.good()){
            std::string line2;
            std::getline(dAndP, line2, ' ');
            message.push_back(line2);
        }

        if (message[0] == "forward") {
            int f_int = std::stoi(message[1]);
            position += f_int;
        } else if (message[0] == "down") {
            int down_int = std::stoi(message[1]);
            depth += down_int;
        } else if (message[0] == "up") {
            int up_int = std::stoi(message[1]);
            depth -= up_int;
        }

        
 }
 
std::cout << "Day 2 - Puzzle 1 --> " << position * depth << std::endl;
}
void day2puzzle2(std::vector<std::string>& inData) 
{

}