#include <iostream>
#include "./headers/words_utils.h"

int main() {
    std::string word(getRandomWord());

    std::cout << word << std::endl;
    return 0;
}
