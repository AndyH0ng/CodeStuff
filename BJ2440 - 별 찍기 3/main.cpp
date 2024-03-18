//
//  2440
//  별 찍기 - 3
//
//  Created by 홍준우 on 3/18/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    for (i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

