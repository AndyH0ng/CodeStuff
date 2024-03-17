//
//  25314
//  코딩은 체육과목 입니다
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string result;
    cin >> n;
    for (int i = 0; i < n / 4; i++)
        result += "long ";
    result += "int";
    cout << result << endl;
    return 0;
}
