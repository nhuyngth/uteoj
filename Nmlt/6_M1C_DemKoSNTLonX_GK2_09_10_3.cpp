#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i*i <= n; i+=6)
        if (n % i == 0 || n % (i+2) == 0) return false;

    return true;
}

int main() {
    int n, x; cin >> n >> x;
    int cnt = 0, temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp > x && !isPrime(temp)) ++cnt;
    }

    cout << cnt;

    return 0;
}