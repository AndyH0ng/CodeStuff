//
//  2525
//  오븐 시계
//
//  Created by 홍준우 on 3/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    int c;
    int min;
    cin >> a;
    cin >> b;
    cin >> c;
    min = 60 * a + b + c;
    int result_hr, result_min;
    result_hr = (int) (min/60);
    if ( result_hr == 24 )
        result_hr = 0;
    // Counter: result_hr가 24보다 클 경우
    if ( result_hr > 24 )
        result_hr -= 24;
    result_min = min%60;
    cout << result_hr << " " << result_min << endl;
    
    return 0;
}
