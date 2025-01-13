// Trên web có nhiều bài tính tiền điện, đều code như v
#include <iostream>

using namespace std;

int main() {
    int x; cin >> x;

    if (x <= 48) cout << x*600;
    else if (x <= 96) cout << 48*600 + (x - 48)*1004;
    else if (x <= 48*3) cout << 48*600 + 48*1004 + (x - 48*2)*1214;
    else {
        cout << 48*600 + 48*1004 + 48*1214 + (x - 48*3)*1594;
    }

    return 0;
}