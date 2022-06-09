// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <cmath>
#include <iostream>

float roundNumber(int decimalsNumber, float &number) {
    number = number * pow(10, decimalsNumber) + 0.5;
    int tempNumber = (int)number;
    number = (float)tempNumber / pow(10, decimalsNumber);
}

int main() {
    // I calculate circumference of a circle
    std::string strDecimalsNumber;
    std::string strNumber;
    int intDecimalsNumber;
    float fltNumber;

    // input
    std::cout << "gib decimals number: ";
    std::cin >> strDecimalsNumber;
    std::cout << "gib number: ";
    std::cin >> strNumber;

    // process
    try {
        intDecimalsNumber = std::stoi(strDecimalsNumber);
        fltNumber = std::stof(strNumber);
        roundNumber(intDecimalsNumber, fltNumber);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << fltNumber << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
