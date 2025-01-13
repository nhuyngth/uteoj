#include <iostream>
#define ll long long

using namespace std;

int main() {

    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;

    if (x <= 50) cout << x*a;
    else if (x <= 100) cout << 50*a + (x-50)*b;
        else if (x <= 150) cout << 50*a + 50*b + (x-100)*c;
            else cout << 50*a + 50*b + 50*c + (x-150)*d;

    return 0;
}
