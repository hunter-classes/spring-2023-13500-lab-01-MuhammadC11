/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 D

This program asks the user to input the year and the month (1-12), and it outputs the number of days in that month (taking into account leap years).
*/
#include <iostream>

int main()
{
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;
    std::cout << "Enter a month (1-12): ";
    int month;
    std::cin >> month;
    if (month == 2)
    {
        if (year % 4 != 0)
        {
            std::cout << "28 days";
        }
        else if (year % 100 != 0)
        {
            std::cout << "29 days";
        }
        else if (year % 400 != 0)
        {
            std::cout << "28 days";
        }
        else
        {
            std::cout << "29 days";
        }
    }
    else if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
    {
        std::cout << "31 days";
    }
    else if (month == 4 or month or 6 or month == 9 or month == 11)
    {
        std::cout << "30 days";
    }

    return 0;
}