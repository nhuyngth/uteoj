#include <iostream>
#include <vector>
#define ll long long    

using namespace std;

int main() {
    ll n, x, point = -1;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] == x) point = i;
    }

    cout << point;

    return 0;
}