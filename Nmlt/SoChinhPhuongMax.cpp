#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

bool isPerfectSquare (ll num) {
    ll sqrtNum = static_cast<ll>(sqrt(num));

    return (sqrtNum * sqrtNum == num) || ((sqrtNum + 1) * (sqrtNum + 1) == num);
}
int main() { 
    ll n; cin >> n;
    vector<ll> v(n);
    ll maxx = -1;

    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
        if (isPerfectSquare(v[i]) && v[i] > maxx) {
            maxx = v[i];
        }
    }

    cout << maxx;

    return 0;
}