//
//  9498
//  시험 성적
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>
#include <iostream>

using namespace std;

int main() {
    int unsigned result;
    cin >> result;
    if (result >= 90 && result <= 100) {
        cout << "A" << endl;
    } else if (result >= 80) {
        cout << "B" << endl;
    } else if (result >= 70) {
        cout << "C" << endl;
    } else if (result >= 60) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }
    return 0;
}
