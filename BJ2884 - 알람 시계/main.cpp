//
//  2884
//  알람 시계
//
//  Created by 홍준우 on 3/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int hr, min;
    int result, result_hr, result_min;
    cin >> hr >> min;
    result = 60 * hr + min - 45;
    result_hr = (int)(result / 60);
    result_min = result % 60;
    if ( result_hr > 24 )
        result_hr -= 24;
    if ( result_hr == 0 )
        result_hr = 24;
    cout << hr << " " << min << endl;
    return 0;
}
