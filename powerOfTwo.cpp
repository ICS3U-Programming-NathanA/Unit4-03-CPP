// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Nov 6 2022
// This program determines the squared of the
// users number and the numbers before it

#include <cmath>
#include <iostream>


int main() {
    // declare userNum and counter as a integer
    int userNum;
    int counter;

    // delcare powerOfTwo and set it to 0
    int powerOfTwo = 0;

    // declare userNumString as a string
    std::string userNumString;

    // get the users number
    std::cout << "Enter a integer: ";
    std::cin >> userNumString;

    // A try catch statement to catch
    // if the user enters a string or a decimal
    try {
        userNum = std::stoi(userNumString);
        // If statement to see if userNum is a negative
        if (userNum >= 0) {
            // A for loop to calculate the squared of
            // the users number and the numbers before it
            for (counter = 0; counter
            <= userNum; counter++) {
                powerOfTwo = pow(counter, 2);
                std::cout << counter << "^2 = "
                << powerOfTwo << "\n";
            }
        } else {
            std::cout << "Please enter a positive whole number \n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a whole number\n";
    }
}
