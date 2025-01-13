#include <iostream>

using namespace std;

int main() {
    int a, b; cin >> a >> b;

    //if ((a < 10 || a > 20) && (b < 10 || b > 20)) cout << 0;
    if (((10 <= a && a <= 20) && (b <10 || b > 20)) || ((10 <= b && b <= 20) && (a < 10 || a > 20))) cout << 1;
    else cout << 0;

    return 0;
}
