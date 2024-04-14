// wap for Rectangle pattern in c++.
// enter the number of row : 5
// enter the number of col : 4
// * * * * 
// * * * * 
// * * * * 
// * * * * 
// * * * * 

#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Enter the number of col : ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}