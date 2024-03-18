//
//  1110
//  더하기 사이클
//
//  Created by 홍준우 on 3/18/24.
//

#include <iostream>

using namespace std;

int x, y, sum, l;

void cycle(int k) {
    if (k < 10) {
        sum = k;
        l = 11 * k;
    } else {
        sum = k / 10 + k % 10;
        l = (k % 10) * 10 + sum % 10;
    }
    
}

int main() {
    int i = 1;
    int n;
    cin >> n;
    if (n != 0) {
        cycle(n);
        do {
            i++;
            cycle(l);
            if (n == l)
                break;
        } while (1);
    }
    cout << i << endl;
    return 0;
}
