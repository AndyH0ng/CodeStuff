//
//  1110
//  더하기 사이클
//
//  Firt created by 홍준우 on 3/18/24.
//  Modified by 홍준우 on 3/19/24.

#include <iostream>

using namespace std;

int x, y, sum, k;

int main() {
    int i = 0;
    int n;
    cin >> n;
    k = n;
    
    do {
        if (k < 10) {
            sum = k;
            k = 11 * k;
        } else {
            sum = k / 10 + k % 10;
            k = (k % 10) * 10 + sum % 10;
        }
        i++;
    } while (n != k);
    cout << i << endl;
    return 0;
}
