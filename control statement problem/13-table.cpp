// print the table of any numbers.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number which you want to print table : ";
    cin >> num;
    cout << "Here is the table of " << num << " : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
