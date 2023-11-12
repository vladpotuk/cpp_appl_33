#include <iostream>
#include<Windows.h>
//Підрахувати кількість слів у введеному реченні.
int countWords(const char* sentence) {
    system("chcp 1251");
    system("cls");
    int wordCount = 0;
    bool inWord = false;

    while (*sentence) {
        if (*sentence == ' ' || *sentence == '\t' || *sentence == '\n') {
            
            inWord = false;
        }
        else if (!inWord) {
            
            inWord = true;
            wordCount++;
        }
        sentence++;
    }

    return wordCount;
}

int main() {
    system("chcp 1251");
    system("cls");
    const int MAX_LENGTH = 100;
    char inputSentence[MAX_LENGTH];

    std::cout << "Введіть речення: ";
    std::cin.getline(inputSentence, MAX_LENGTH);

    int words = countWords(inputSentence);

    std::cout << "Кількість слів у реченні: " << words << std::endl;

    return 0;
}
