//
//  14581
//  팬들에게 둘러싸인 홍준
//
//  Created by 홍준우 on 3/6/24.
//

#include <iostream>
#include <string>

using namespace std;

string id;
string fan = ":fan:";

namespace output {
void Fan1() {
    cout << fan << ":" << id << ":" << fan << endl;
}
void Fan3() {
    cout << fan << fan << fan << endl;
}
}

int main() {
    cin >> id;
    output::Fan3();
    output::Fan1();
    output::Fan3();
    return 0;
}
