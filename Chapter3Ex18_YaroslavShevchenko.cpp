/*
Tite Chapter 3 Exercise 18 - Interest Earned
File name:Chapter3Exe18_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 09/27/2024
Requirements:
Formula: 

Amount = Principal * (1+rate/T)^T

Write a program that asks for the prinicpal, the interest rate, and the
number of times the interest is compounded. 
It should display report with All the given inputs from user and Interest 

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double principal;
    double rate;
    double T;
    double amount;
    double interests;

    cout << "Enter your principal: ";
    cin >> principal;
    cout << "Enter your interest rate: ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> T;



    amount = principal * pow((1 + (rate/100) / T), T);
    interests = amount - principal;

    cout << fixed << setprecision(2);

    cout << "Interest rate: " << setw(20) << right << rate << "%" << endl;
    cout << "Times compounded: " << setw(17) << right << T << endl;
    cout << "Principal: " << setw(24) << right << principal << endl;
    cout << "Interests: " << setw(24) << right << interests << endl;
    cout << "Amount in savings: " << setw(16) << right << amount << endl;


}


