// Write a C++ program to display all the prime numbers between two given integers using a for loop.
// Note: 0 and 1 is not a prime number.

#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter start and end range values : ";
    cin >> start >> end;

    cout << "Prime number between " << start << " and " << end << endl;

    for (int i = start; i <= end; i++)
    {
        bool isPrime = true;
        if (i <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}