//
//  8393
//  합
//
//  Created by 홍준우 on 3/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 0;
    cin >> n;
    for (int i = 1; i < (n+1); i++) {
        result += i;
    }
    cout << result << endl;
    return 0;
}
