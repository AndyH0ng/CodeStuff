//
//  2753
//  윤년
//
//  Created by 홍준우 on 3/7/24.
//

#include <iostream>

using namespace std;

int main() {
    int year;
    bool is_year = false;
    cin >> year;
    if (year % 4 != 0)
        is_year = false;
    else if (year % 100 != 0 || year % 400 == 0)
        is_year = true;
    cout << is_year << endl;
    return 0;
}

