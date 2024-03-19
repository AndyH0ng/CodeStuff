//
//  1546
//  평균
//
//  Created by 홍준우 on 3/19/24.
//

#include <iostream>

using namespace std;
int main() {
    int n;
    int m = 0;
    int sum = 0;
    cin >> n;
    int score[n];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (score[i] > m)
            m = score[i];
    }
    
    for (int i = 0; i < n; i++) {
        sum += score[i];
    }
    float result;
    result = (float) sum / m * 100 / n;
    cout.precision(5);
    cout << result << endl;
    return 0;
}
