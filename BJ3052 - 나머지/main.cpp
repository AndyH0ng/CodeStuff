//
//  3052
//  나머지
//
//  Created by 홍준우 on 3/25/24.
//

#include <iostream>

using namespace std;

int main() {
    int input[10];
    int result[42];
    int output = 0;
    
    for (int i = 0; i < 10; i++) {
        cin >> input[i];
        input[i] %= 42;
    }
    for (int i = 0; i < 42; i++) {
        result[i] = 0;
    }
    for (int i = 0; i < 10; i++) {
        result[input[i]] = 1;
    }
    for (int i = 0; i < 42; i++) {
        output += result[i];
    }
    cout << output << endl;
    return 0;
}
