//
//  2439
//  별 찍기 - 2
//
//  Created by 홍준우 on 3/18/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
