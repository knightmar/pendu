#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "headers/words_utils.h"

std::string getRandomWord() {
    //init random
    srand(time(NULL));

    //read the whole file and put each word on an array;
    std::ifstream myfile;
    myfile.open("words.txt");
    std::string current_word;
    std::vector<std::string> words;
    if (myfile.is_open()) {
        while (myfile) {
            std::getline(myfile, current_word);
            words.push_back(current_word);
        }
    } else {
        std::cout << "Couldn't open file\n";
    }
    //get a random word from the array
    int RanIndex = rand() % words.size();
    std::string result(words.at(RanIndex));
    //lower case modifier
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}