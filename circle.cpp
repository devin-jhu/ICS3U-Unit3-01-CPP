// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// Simple addition

#include <iostream>

int main() {
    // this function calculates circumference
    int number_one;
    int number_two;
    double total;

    // input
    std::cout << "Enter number (integer): ";
    std::cin >> number_one;
    std::cout << "Enter number (integer): ";
    std::cin >> number_two;

    // process
    total = number_one + number_two;

    // output
    std::cout << ""
            << number_one << " + " << number_two << " = " << total << std::endl;
    std::cout << "Done."  << std::endl;
}
