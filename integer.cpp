// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Oct, 11, 2023
// This program will ask the user for a integer
// then check if it is positive negative or 0


#include <iostream>

int main() {
    // declare userInt
    int userInt;

    // get the userInt and display message
    std::cout << "This program will ask the user for a integer ";
    std::cout << "\nthen check if it is positive negative or 0.";
    std::cout << "\nEnter your integer: ";
    std::cin >> userInt;

    if (userInt == 0) {
        // display that the user integer is 0
        std::cout << "\nYour integer is 0.";
    } else if (userInt > 0) {
        // display that the user integer is positive
        std::cout << "\nYour integer is positive.";
    } else {
        // display the users integer is negative
        std::cout << "\nYour integer is negative.";
    }
}
