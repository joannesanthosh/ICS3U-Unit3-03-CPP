// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This is the guessing game program

#include <iostream>
#include <random>

int main() {
    int randomNumber;
    int userGuess;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // Input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> userGuess;
    std::cout << std::endl;

    // Process and Output
    if (userGuess == randomNumber) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect, the number was " << ""
         << randomNumber << "" << std::endl;
    }
    std::cout << "\nDone.";
}
