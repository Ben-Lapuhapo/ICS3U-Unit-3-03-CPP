// Copyright (c) 2019 St. Mother Teresa HS All Rights Reserved.
//
// Created By:Ben Lapuhapo.
// Created on:Sep 2019.
// This program is a guessing game

#include <iostream>

int main() {
    // This function checks if the user's number is correct
    int user_input;
    int secret_number = rand() % 1 + 9;

    // input
    std::cout << "Enter Your guess from (0-9): ";
    std::cin >> user_input;
    std::cout << "" << std::endl;
    // process

    if (user_input == secret_number) {
    std::cout << "Correct Number ---->";
    std::cout << secret_number;
    } else {
    std::cout << "Wrong Number.";
    }
  return 0;
}
