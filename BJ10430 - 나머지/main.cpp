//
//  10430
//  나머지
//
//  Created by 홍준우 on 3/7/24.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    // a = cM + α
    // b = cN + β 라 하자.
    
    cout << (a + b) % c << endl <<
    // 이는 (α + β) % c 와 동치이다.
    ( (a % c) + (b % c) ) % c << endl;
    // 이는 (α + β) % c 와 동치이다.
    
    cout << (a * b) % c << endl <<
    // 이는 (α * β) % c 와 동치이다.
    ( (a % c) * (b % c) ) % c << endl;
    // 이는 (α * β) % c 와 동치이다.
    return 0;
}
