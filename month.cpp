// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program changes the number of a month to its word counterpart

#include <iostream>
#include <string>

int main() {
    // This function changes the number of a month to its word counterpart
    std::string month_str;
    int month_int;

    // Input
    std::cout << "Enter a month in the form of a number (1-12): ";
    std::cin >> month_str;

    month_int = atoi(month_str.c_str());

    // Process & Output
    switch (month_int) {
        case 1:
            std::cout << "The 1st Month is January!" << std::endl;
            break;
        case 2:
            std::cout << "The 2nd Month is February!" << std::endl;
            break;
        case 3:
            std::cout << "The 3rd Month is March!" << std::endl;
            break;
        case 4:
            std::cout << "The 4th Month is April!" << std::endl;
            break;
        case 5:
            std::cout << "The 5th Month is May!" << std::endl;
            break;
        case 6:
            std::cout << "The 6th Month is June!" << std::endl;
            break;
        case 7:
            std::cout << "The 7th Month is July!" << std::endl;
            break;
        case 8:
            std::cout << "The 8th Month is August!" << std::endl;
            break;
        case 9:
            std::cout << "The 9th Month is September!" << std::endl;
            break;
        case 10:
            std::cout << "The 10th Month is October!" << std::endl;
            break;
        case 11:
            std::cout << "The 11th Month is November!" << std::endl;
            break;
        case 12:
            std::cout << "The 12th and Last Month is December!" << std::endl;
            break;
        default :
            std::cout << "That is not a valid month!" << std::endl;
    }
}
