//
//  10818
//  최소, 최대
//
//  Created by 홍준우 on 3/17/24.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    int max = -1000000;
    int min = 1000000;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    for (int i = 0; i < n; i++) {
        if (array[i] >= max)
            max = array[i];
        if (array[i] <= min)
            min = array[i];
    }
    cout << min << " " << max << endl;
    return 0;
}
