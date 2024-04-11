// Write a program to check if a given number is even or odd using conditional statements.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout<<num<<" is even number!";
    }
    else
    {
        cout<<num<<" is odd number!";
    }
    
    return 0;
}