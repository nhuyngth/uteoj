#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;

    ll sum = 0, k = 1;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    for (ll i = 1; i < n; ++i) {
        if (sum + i >= n) {
            cout << i-1;
            return 0;
            break;
        }

        sum += i;
    }

    cout << 0;

    return 0;
}