// Develop a C++ program to print the Fibonacci series up to N terms using a for loop.
// 0 1 1 2 3 5 8 13

#include <iostream>
using namespace std;
int main()
{
    int num, n1 = 0, n2 = 1, next = 0;
    cout << "Enter the value of n terms : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            cout << n1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << n2 << " ";
            continue;
        }
        next = n1 + n2;
        n1 = n2;
        n2 = next;

        cout << next << " ";
    }
    return 0;
}