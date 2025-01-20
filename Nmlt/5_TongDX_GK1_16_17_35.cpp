#include <iostream>
#define ll long long

using namespace std;

int countDigits(int n) {
    int cnt = 0;

    while (n != 0) {
        n /= 10;
        ++cnt;
    }

    return cnt;
}

int main() {
    int n; cin >> n;
    ll sum = 0;

    for (int i = 1; i <= n; ++i) {
        int cnt = countDigits(i);
        ll mid = 1;
        for (int j = 0; j < cnt; ++j) mid *= 10;
        sum += i*mid + i;
    }

    cout << sum;

    return 0;
}