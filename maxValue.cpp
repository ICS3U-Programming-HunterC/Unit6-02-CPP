// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 19, 2022
// This program generates 10 random numbers between 1 and 100 and
// displays them to the user and then finds the average of all
// the numbers

#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
#include <array>
#include <random>

// declare constants
const int MAX_SIZE = 10;
const int MAX_NUM = 100;
const int MIN_NUM = 0;

template<size_t N>
int GetMaxValue(std::array<int, N> arrayOfNum) {
    int counter;
    int maxValue = -1;

    for (counter = 0; counter < arrayOfNum.size(); counter ++) {
        if (arrayOfNum[counter] > maxValue) {
            maxValue = arrayOfNum[counter];
        }
    }

    return maxValue;
}


main() {
    // declare variables
    int randomInt;
    int counter;
    int maxValue;

    // declare array
    std::array<int, MAX_SIZE> arrayOfNum;

    srand(time(NULL));

    // generate the random numbers
    for (counter = 0; counter < MAX_SIZE; counter ++) {
        // generate random number
        randomInt = (rand() % MAX_NUM + 1) + MIN_NUM;

        // assign the random number to the array
        arrayOfNum[counter] = randomInt;

        // display the random number
        std::cout << arrayOfNum[counter] << " added to the list at position "
<< counter << "\n";
    }

    maxValue = GetMaxValue(arrayOfNum);

    // display the max number
    std::cout << "\n";
    std::cout << "The max value is: " << maxValue;
}
