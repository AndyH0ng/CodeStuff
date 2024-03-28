//
//  1173
//  운동
//
//  Created by 홍준우 on 3/27/24.
//

#include <iostream>

using namespace std;

int main() {
    int N, m, M, T, R;
    int X;
    int excercise = 0, rest = 0;
    cin >> N >> m >> M >> T >> R;
    X = m;
    if (m + T > M) {
        cout << -1 << endl;
        exit(0);
    }
    do {
        if (X + T <= M) {
            // 운동하기
            X += T;
            excercise++;
        } else {
            // 휴식하기
            X -= R;
            if (X < m)
                X = m;
            rest++;
        }
    } while (excercise < N);
    cout << excercise + rest << endl;
    return 0;
}
