// C++ Program to Check Whether a Number is Palindrome or Not.

#include <iostream>
using namespace std;
int main()
{
    int num, reversedNum = 0, remainder, n;
    cout << "Enter an integer : ";
    cin >> num;

    n = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }

    cout << "Reversed number : " << reversedNum << endl;

    if (n == reversedNum)
    {
        cout << "The number is palindrome.";
    }
    else
    {
        cout << "The number is not a palindrome.";
    }

    return 0;
}