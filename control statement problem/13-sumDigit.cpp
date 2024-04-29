// Given a number, N. Find the sum of all the digits of N.
// input = 12, output = 1 + 2 = 3

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter any number : ";
    cin >> num;
    while (num > 0)
    {
        int next = num % 10;
        sum = sum + next;
        num = num / 10;
    }

    cout << "Addition of numbers : " << sum;

    return 0;
}