// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This is the guessing game program

#include <iostream>

int main() {
    // this function checks if guess is correct or incorrect
    // URL: https://www.algolist.net/Cpp/Guess_game
    srand(time(0));
    int randomNumber;
    randomNumber = rand(0, 9);
    int userGuess;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // process
    if (userGuess != randomNumber) {
        // output
        std::cout << "Incorrect. The answer is ";
    }

    if (userGuess == randomNumber) {
        // output
        std::cout << "Correct!";
    }

    std::cout << "\nDone." << std::endl;
    system("PAUSE");

    return 0;
}
