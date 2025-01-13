#include <iostream>
#include <vector>
#define ll long long

using namespace std;

bool isPrime(ll x) {
    if (x < 2) return 0;
    if (x < 4) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (ll i = 5; i*i < x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }

    return 1;
}

int main() {
    ll n; cin >> n;
    vector<ll> v(n);
    ll minn = 1e9;

    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
        if (isPrime(v[i]) && v[i] < minn) {
            minn = v[i];
        }
    }

    if (minn == 1e9) cout << 0;
    else cout << minn;

    return 0;
}