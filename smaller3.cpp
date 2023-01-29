/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E2.10 - Cost per 100 miles

This program finds the smallest of three numbers.
*/

#include <iostream>
using namespace std;
// write a function to find the smallest if three numbers
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is the smallest ";
        }
        else
        {
            cout << c << " is the smallest ";
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is the smallest ";
        }
        else
        {
            cout << c << " is the smallest ";
        }
    }
    return 0;
}