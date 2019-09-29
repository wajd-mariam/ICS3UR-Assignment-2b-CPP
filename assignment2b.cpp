// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:September 2019
// This program calculates the surface area of the cylinders

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // The variables I'm using
    float radius;
    float height;
    float surface_area;

    // input
    std::cout << "Enter the radius of the cylinder (cm):";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder (cm):";
    std::cin >> height;

    // process
    surface_area = (2 * M_PI * radius * height) + 2 * (M_PI * pow(radius, 2.0));

    // output
    std::cout <<""<< std::endl;
    std::cout << "The surface area of the cylinder is :" << surface_area
    << "cm^2" << std::endl;
}
