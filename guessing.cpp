// Copyright (c) 2020 St. Mother Teresa HS All rights reserved
//
// Created by: Dahrio Francois
// Created on: December 2020
// this code makes you guess a hidden number

#include <iostream>
#include <cstdlib>
#include <ctime>
using-namespace std;

int main() {
    int num, guess, tries = 0;
    srand(time(0));  // seed random number generator
    num = rand_r() % 9 + 1;  // random number between 1 and 9
    cout << "Guess My Number Game\n\n";

    do {
        cout << "Enter a number between 1 & 9: ";
        cin >> guess;
        tries++;

        if (guess > num)
               cout << "Too high!\n\n";
        else if (guess < num)
               cout << "Too low!\n\n";
        else
                cout << "\nCorrect! You got it in " << tries << " guesse(s)\n";
    } while (guess != num);

    return 0;
}
