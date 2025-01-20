#include <iostream>

using namespace std;

int main() { 
    int a, b, c; cin >> a >> b;
    c = 180 - a- b;

    if (a < 90 && b < 90 && c < 90) cout << 3;
    else if (a > 90 || b > 90 || c > 90) cout << 2;
    else if (a == b || b == c || c == a) cout << 0;
    else cout << 1;

    return 0;
}