//
//  main.cpp
//  BJ1002
//
//  Created by 홍준우 on 3/25/24.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    int x1, y1, r1, x2, y2, r2;
    cin >> t;
    int result[t];
    int distance;
    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        distance = sqrt((int)pow((x1 - x2), 2) + (int)pow((y1 - y2), 2));
        
        if (distance == 0) {
            // 원의 중심이 겹침
            if (r1 == r2)
                // 반지름의 크기가 같음
                result[i] = -1;
            else
                // 반지름의 크기가 다름
                result[i] = 0;
        } else {
            // 원의 중심이 겹치지 않음
            if (r1 + r2 == distance || abs(r1 - r2) == distance)
                // 원이 외접함 || 원이 내접함
                result[i] = 1;
            else if (r1 + r2 < distance || abs(r1 - r2) > distance)
                // 원의 중심이 각각의 원 밖에 존재함 || 원의 중심이 각각의 원 안에 존재함
                result[i] = 0;
            else
                result[i] = 2;
            
        }
    }
    for (int i = 0; i < t; i++)
        cout << result[i] << endl;
    return 0;
}
