//
//  15727
//  조별과제를 하려는데 조장이 사라졌다
//
//  Created by 홍준우 on 3/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int result;
    cin >> n;
    result = n / 5;
    if (n % 5 != 0)
        result++;
    cout << result;
    return 0;
}
