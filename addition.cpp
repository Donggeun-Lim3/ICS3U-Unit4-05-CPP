// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This is for loop program

#include <iostream>
#include <string>

main() {
    std::string positiveString;
    std::string addString;
    int loopCounter;
    int addedNumber;
    int addNumber;
    int positiveNumber;
    std::cout << "Enter how many numbers you would like to add together : ";
    std::cin >> positiveString;
    std::cout << "" << std::endl;

    try {
        positiveNumber = std::stoi(positiveString);

        if (positiveNumber > 0) {
            for (loopCounter = 0, addedNumber = 0; loopCounter <=
            positiveNumber - 1; loopCounter++) {
                std::cout << "Enter integer to add : ";
                std::cin >> addString;
                std::cout << "" << std::endl;

                try {
                addNumber = std::stoi(addString);
                if (addNumber > 0) {
                    addedNumber = addNumber + addedNumber;
                } else {
                    continue;
                }
                } catch (std::invalid_argument) {
                    std::cout << "That was not an integer";
            }
            }
            std::cout << "The total is : " << addedNumber;
        } else {
            std::cout << "This year is negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
