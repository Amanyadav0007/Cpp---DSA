// wap for Continuous Alphabet Pyramid Pattern in C++ .
// A
// B C
// D E F
// G H I J
// K L M N O

#include <iostream>
using namespace std;
int main()
{
    int n, num = 65;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char ch = char(num);
            cout << ch << " ";
            num = num + 1;
        }
        cout << "\n";
    }

    return 0;
}