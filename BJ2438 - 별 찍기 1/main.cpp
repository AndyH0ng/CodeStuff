//
//  2438
//  별 찍기 - 1
//
//  Created by 홍준우 on 3/7/24.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string star = "*";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << star << endl;
        // FIXME: star += star;
        star += "*";
    }
    return 0;
}
