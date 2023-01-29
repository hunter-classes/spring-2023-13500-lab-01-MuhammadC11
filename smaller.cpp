/*
Author: Muhammad Chaudhry
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 A

The program prompts the user to enter two integers and outputs the smaller of the two.
*/

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if (a < b)
    {
        cout << a << " is the smallest ";
    }
    else
    {
        cout << b << " is the smallest";
    }
    return 0;
}
