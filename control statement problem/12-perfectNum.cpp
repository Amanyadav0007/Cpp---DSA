// Create a C++ program to check if a given number is a perfect number or not using nested loops.

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        cout << num << " is a perfect number!";
    }
    else
    {
        cout << num << " is not a perfect number!";
    }

    return 0;
}