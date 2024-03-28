//
//  1076
//  저항
//
//  Created by 홍준우 on 3/27/24.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long value[3];
string color[3];

enum str {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
};

int getNumber(string str, int digit) {
    int value;
    if (str == "black")
        value = BLACK;
    else if (str == "brown")
        value = BROWN;
    else if (str == "red")
        value = RED;
    else if (str == "orange")
        value = ORANGE;
    else if (str == "yellow")
        value = YELLOW;
    else if (str == "green")
        value = GREEN;
    else if (str == "blue")
        value = BLUE;
    else if (str == "violet")
        value = VIOLET;
    else if (str == "grey")
        value = GREY;
    else
        value = WHITE;
    
    switch (digit) {
        case 0:
            value *= 10;
            return value;
            break;
        case 1:
            return value;
            break;
        case 2:
            value = pow(10, value);
            return value;
            break;
        default:
            return 0;
            break;
    }
}

int main() {
    cin >> color[0] >> color[1] >> color[2];
    for (int i = 0; i < 3; i++) {
        value[i] = getNumber(color[i], i);
    }
    cout << (value[0] + value[1]) * value[2] << endl;
    return 0;
}

