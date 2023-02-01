/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 A

The program prompts the user to enter two integers and outputs the smaller of the two.
*/

#include <iostream>

int main()
{
    int a;
    int b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    if (a < b)
    {
        std::cout << a << " is the smallest ";
    }
    else
    {
        std::cout << b << " is the smallest";
    }
    return 0;
}
