#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() { 
    double x, y; cin >> x >> y;
    int xx = (int)x, yy = (int)y;
    
    cout << gcd(xx, yy);

    return 0;
}