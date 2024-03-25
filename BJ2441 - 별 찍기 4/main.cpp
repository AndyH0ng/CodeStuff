//
//  2441
//  별 찍기 - 4
//
//  Created by 홍준우 on 3/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    for (i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int k = i; k >= 1; k--)
            cout << "*";
        cout << endl;
    }
    return 0;
}
