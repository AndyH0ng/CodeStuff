//
//  2588
//  곱셈
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a, b, c, d;
    cin >> n >> m;
    d = m % 10;
    int before_c = m % 100;
    c = (before_c - d) / 10;
    b = (m - before_c) / 100;
    int after_d = n * d;
    int after_c = n * c;
    int after_b = n * b;
    cout << after_d << endl <<
    after_c << endl <<
    after_b << endl;
    a = after_b * 100 + after_c * 10 + after_d;
    cout << a << endl;
    return 0;
}

