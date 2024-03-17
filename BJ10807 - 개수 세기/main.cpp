//
//  10807
//  개수 세기
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int n, result = 0;
    int v;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    cin >> v;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == v)
            result++;
    }
    cout << result << endl;
    return 0;
}
