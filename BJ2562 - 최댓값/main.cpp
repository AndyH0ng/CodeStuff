//
//  2562
//  최댓값
//
//  Created by 홍준우 on 3/18/24.
//

#include <iostream>

using namespace std;

int main() {
    int num[9];
    int max = 0;
    int count = 0;
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        if (num[i] > max) {
            max = num[i];
            count = i + 1;
        }
    }
    cout << max << endl << count << endl;
    return 0;
}
