// lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float balance = 1000;
    cout << "ENTER THE INITIAL BALANCE:" << balance << endl;
    float deposit = 1000;
    cout << "ENTER THE DEPOSIT AMOUNT:" << deposit << endl;
    float withdrawl = 500;
    cout << "ENTER THE WITHDRAWL AMOUNT:"<<withdrawl << endl;
    balance += deposit;
    cout << "BALANCE AFTER "<< deposit <<" DEPOSIT IS:" << balance << endl; //in this balance will add to deposit bcz we use +=
    balance -= withdrawl;
    cout << "BALANCE AFTER " << withdrawl <<" WITHDRAWL IS:" <<balance<<endl;//in this balance will substract from withdrawl amount bcz we use -=
}
 