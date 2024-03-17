//
//  10950
//  A + B - 3
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int t;
    int a, b;
    cin >> t;
    int result[t];
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        result[i] = a + b;
    }
    for (int i = 0; i < t; i++)
        cout << result[i] << endl;
    return 0;
}

