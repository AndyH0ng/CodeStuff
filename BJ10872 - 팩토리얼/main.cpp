//
//  10872
//  팩토리얼
//
//  Created by 홍준우 on 3/19/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int output = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        output *= i;
    cout << output << endl;
    return 0;
}
