//              *                 *
//              * *             * *
//              * * *         * * *
//              * * * *     * * * *
//              * * * * * * * * * *
//              * * * * * * * * * *
//              * * * *     * * * *
//              * * *         * * *
//              * *             * *
//              *                 *

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
           }
        for (int j = i*2; j < n*2; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
          }
        cout << endl;
    }
    // Lower part
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
      }
        for (int j = i*2; j < n*2; j++) {
            cout << "  ";
         }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
          }
        cout << endl;
      }
    return 0;
}
