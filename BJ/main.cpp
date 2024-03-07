//
//  #####
//  PRBLMNME
//
//  Created by 홍준우 on M/D/YY.
//

#include <iostream>

using namespace std;

int main() {
    int t;
    int x1, y1, r1;
    int x2, y2, r2;
    int cases;
    cin >> t;
    cin >>
    x1 >> y1 >> r1 >>
    x2 >> y2 >> r2;
    int distance = sqrt( (x2 - x1)^2 + (y2 - y1)^2 );
    if (distance < (r1 + r2))
        cases = 2;
    else if (distance == (r1 + r2))
        cases = -1;
    else if (distance > (r1 + r2))
        cases = 0;
    return 0;
}
