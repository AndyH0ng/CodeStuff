//
//  11022
//  A + B - 8
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int a, b;
    cin >> n;
    int result[n][3];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        result[i][0] = a;
        result[i][1] = b;
        result[i][2] = a + b;
    }
    for (int i = 0; i < n; i++) {
        cout << "Case #" << i + 1 << ": " << result[i][0] << " + " << result[i][1] << " = " << result[i][2] << endl;
    }
    return 0;
}
