/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 1 C


This program asks the user to input the year, and it outputs whether or not that year is a leap year.
*/
#include <iostream>
int main()
{
    std::cout << "Enter the year: ";
    int year;
    std::cin >> year;
    if (year % 4 != 0)
    {
        std::cout << "Common Year";
    }
    else if (year % 100 != 0)
    {
        std::cout << "Leap Year";
    }
    else if (year % 400 != 0)
    {
        std::cout << "Common Year";
    }
    else
    {
        std::cout << "Leap Year";
    }
}
