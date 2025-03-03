/* Program File Name:  Chapter4-Exercise10.cpp
Programmer: Bryan Hurley
Date:March 2025
Requirements: Write a program that asks the user to enter the month
(letting the user enter an integer in the range of 1 through 12) and the year. The program should then display the number of days in that month.
*/


#include <iostream>
using namespace std;

int main()
{
    int month, year;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    switch (month) {
    case 4: case 6: case 9: // April, June, September
        cout << "30 Days" << endl;
        break;
    case 2: // February
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "29 Days";
            }
            else {
                cout << "28 Days";
            }
        }
        else {
            if (year % 4 == 0) {
                cout << "29 Days";
            }
            else {
                cout << "28 Days";
            }
        }
        break;
    default: // Everything else
        cout << "31 Days" << endl;
        break;
    }
}
