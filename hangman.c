#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string words[] = {"pointer", "compiler", "variable", "function", "keyboard"};
    int n = sizeof(words) / sizeof(words[0]);

    srand((unsigned int)time(0));
    string word = words[rand() % n];

    int len = word.length();
    string guessed(len, '_');   // string of underscores, same length as word

    int lives = 6;
    bool wordSolved = false;

    while (lives > 0 && !wordSolved) {
        cout << "\nWord: ";
        for (int i = 0; i < len; i++) cout << guessed[i] << " ";
        cout << "\nLives left: " << lives << endl;

        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        bool correct = false;
        for (int i = 0; i < len; i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                correct = true;
            }
        }

        if (!correct) {
            lives--;
            cout << "Wrong guess!" << endl;
        }

        wordSolved = (guessed == word);
    }

    if (wordSolved)
        cout << "\nYou won! The word was: " << word << endl;
    else
        cout << "\nGame over! The word was: " << word << endl;

    return 0;
}