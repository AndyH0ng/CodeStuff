//
//  1330
//  두 수 비교하기
//
//  Created by 홍준우 on 2/27/24.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    } else if (a < b) {
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }
    return 0;
}
