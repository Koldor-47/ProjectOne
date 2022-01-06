#include "utils.h"

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

std::vector<std::string> splitOn(std::string inputString, std::string delimitor){
    std::vector<std::string> outData;
    
    while (inputString.find(delimitor) != -1){
        std::string word;
        word.resize(inputString.size());
        int startOfDelimitor = inputString.find(delimitor);
        std::copy_n(inputString.begin(), startOfDelimitor, word.begin());
        inputString = inputString.substr(startOfDelimitor + delimitor.size(), inputString.size());
        outData.push_back(word);
    }
    if (inputString.size() > 0){
        outData.push_back(inputString);
    }
    return outData;
}

