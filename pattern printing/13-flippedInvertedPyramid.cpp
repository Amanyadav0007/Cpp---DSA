// wap for flipped inverted pyramid in c++.
// * * * * * 
//   * * * * 
//     * * * 
//       * * 
//         * 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Print flipped inverted pyramid pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        // Print asterisks
        for (int j = i; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

