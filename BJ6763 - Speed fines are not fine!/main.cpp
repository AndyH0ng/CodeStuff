//
//  6763
//  Speed fines are not fine!
//
//  Created by 홍준우 on 3/18/24.
//

#include <iostream>

using namespace std;

int main() {
    int limit, speed, fine;
    cin >> limit >> speed;
    speed -= limit;
    if (speed < 1)
        fine = 0;
    else if (speed < 21)
        fine = 100;
    else if (speed < 31)
        fine = 270;
    else
        fine = 500;
    
    switch (fine) {
        case 0:
            cout << "Congratulations, you are within the speed limit!" << endl;
            break;
        case 100:
            cout << "You are speeding and your fine is $100." << endl;
            break;
        case 270:
            cout << "You are speeding and your fine is $270." << endl;
            break;
        case 500:
            cout << "You are speeding and your fine is $500." << endl;
            break;
    }
    return 0;
}
