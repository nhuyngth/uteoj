#include <iostream>

using namespace std;

int main() { 
    int a, b, c; cin >> a >> b >> c;

    if (a >= b+c || b >= a+c || c >= a+b) cout << 4;
    else if (a == b && b == c) cout << 0;
    else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b)) cout << 1;
    else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) cout << 2;
    else cout << 3;

    return 0;
}