//
//  1008
//  A / B
//
//  Created by 홍준우 on 2/27/24.
//

#include <iostream>

using namespace std;

int main() {
    int unsigned a,b;
    cin >> a >> b;
    // TODO: 소수점 9자리까지 출력 (기본은 6자리)
    cout.precision(9);
    // FIXME: a/b의 정수형을 실수형으로 초기화
    // cout << (double)(a/b) << endl;
    cout << (double)a / (double)b << endl;
    return 0;
}
