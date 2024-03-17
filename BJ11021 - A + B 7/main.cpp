//
//  11021
//  A + B - 7
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int a, b;
    cin >> n;
    int result[n];
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        result[i] = a + b;
    }
    for (int i = 0; i < n; i++) {
        cout << "Case #" << i + 1 << ": " << result[i] << endl;
    }
    return 0;
}
