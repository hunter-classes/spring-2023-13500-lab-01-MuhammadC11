/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 B

This program finds the smallest of three numbers.
*/

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the third number: ";
    std::cin >> c;
    if (a < b)
    {
        if (a < c)
        {
            std::cout << a << " is the smallest ";
        }
        else
        {
            std::cout << c << " is the smallest ";
        }
    }
    else
    {
        if (b < c)
        {
            std::cout << b << " is the smallest ";
        }
        else
        {
            std::cout << c << " is the smallest ";
        }
    }
    return 0;
}