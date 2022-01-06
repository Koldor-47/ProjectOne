#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

std::vector<int> readTxt_to_int(std::string filePath);
std::vector<std::string> readTxt(std::string filePath);
std::vector<std::string> splitOn(std::string inputString, std::string delimitor);