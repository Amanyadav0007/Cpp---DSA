// Write a program to find the factorial of a given number using a for loop.

#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial is : " << fact;
    return 0;
}