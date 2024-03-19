//
//  5596
//  시험 점수
//
//  Created by 홍준우 on 3/19/24.
//

#include <iostream>

using namespace std;

int sum, score;

void whose() {
    sum = 0;
    for (int i = 0; i < 4; i++) {
        cin >> score;
        sum += score;
    }
}

int main() {
    int d, m;
    whose();
    d = sum;
    whose();
    m = sum;
    if (d > m)
        cout << d << endl;
    else
        cout << m << endl;
    return 0;
}
