// Check a number is prime or not.
// Note : 0 and 1 are not prime numbers.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if (num==0 || num==1)
    {
        cout<<"Thsi is not a prime number!!";
        return 0; // if this block is true then we terminate the code.
    }
    
    bool isPrime = true; // flag variable to determine is it prime number.

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break; // found a divisior so no need to continue checking.
        }
        
    }

    if (isPrime) // here we check if flag variable's value change then what to print.
    {
        cout<<"This is a prime number!";
    }
    else
    {
        cout<<"This is not a prime number!";
    }

    return 0;
}