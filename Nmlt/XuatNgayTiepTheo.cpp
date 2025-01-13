#include <iostream>

using namespace std;

int main() {
    int dd, mm, yy; cin >> dd >> mm >> yy;

    if (mm > 12 || dd > 31) cout << 0;

    if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
        if (dd > 30) cout << 0;
        else if (dd == 30) cout << 1;
        else cout << dd + 1;
    }
    else if (mm == 2) {
        if (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)) {
            if (dd > 29) cout << 0;
            else if (dd == 29) cout << 1;
            else cout << dd + 1;
        }
        else {
            if (dd > 28) cout << 0;
            else if (dd == 28) cout << 1;
            else cout << dd + 1;
        }
    }
    else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
        if (dd > 31) cout << 0;
        else if (dd == 31) cout << 1;
        else cout << dd + 1;
    }
        
    return 0;
}