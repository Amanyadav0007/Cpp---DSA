// Implement a C++ program to find the sum of all natural numbers between 1 to N using a do-while loop.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 1;
    cout << "Enter the value of n : ";
    cin >> n;

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);

    cout << "Total sum is : " << sum;
    return 0;
}