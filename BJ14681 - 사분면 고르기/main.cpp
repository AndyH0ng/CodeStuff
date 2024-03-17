//
//  14681
//  사분면 고르기
//
//  Created by 홍준우 on 2/27/24.
//

#include <iostream>

using namespace std;

int main() {
    int x, y;
    int unsigned result;
    cin >> x;
    cin >> y;
    if ( x > 0 && y > 0 ) {
        result = 1;
    } else if ( x < 0 && y > 0 ) {
        result = 2;
    } else if ( x < 0 && y < 0 ) {
        result = 3;
    } else if ( x > 0 && y < 0 ) {
        result = 4;
    }
    cout << result << endl;
    
    return 0;
}
