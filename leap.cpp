/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 C


This program asks the user to input the year, and it outputs whether or not that year is a leap year.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the year: ";
    int year;
    cin >> year;
    if (year % 4 != 0)
    {
        cout << "Common Year";
    }
    else if (year % 100 != 0)
    {
        cout << "Leap Year";
    }
    else if (year % 400 != 0)
    {
        cout << "Common Year";
    }
    else
    {
        cout << "Leap Year";
    }
}
