//
//  25304
//  영수증
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int x, n;
    int a, b;
    int total = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        total = total + a * b;
    }
    if (total == x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
