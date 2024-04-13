// Write a program to print Inverted Half-Pyramid.
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // logic 1
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // logic 2
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }

    return 0;
}