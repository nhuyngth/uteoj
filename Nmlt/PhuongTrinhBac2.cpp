#include <iostream>

using namespace std;

int main() { 
    double a, b, c; cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) cout << 4;
    else if (a == 0 && b != 0) cout << 1;
    else {
        double delta = b*b - 4*a*c;
        if (delta > 0) cout << 2;
        else if (delta < 0) cout << 0;
        else if (delta == 0) cout << 3;
    }
    
    return 0;
}