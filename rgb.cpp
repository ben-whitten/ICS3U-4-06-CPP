// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which tells you the values of rgb.

#include <iostream>

int main() {
    // This is what runs the program.
    int red = 0;
    int blue = 0;
    int green = 0;

    // Process
    for (red = 0; red < 256; red++) {
        for (blue = 0; blue < 256; blue++) {
            for (green = 0; green < 256; green++) {
                std::cout << red << ", " << blue << ", " << green << std::endl;
            }
        }
    }
}
