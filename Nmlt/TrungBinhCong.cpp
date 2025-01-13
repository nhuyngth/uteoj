#include <iostream>
#define ll long long    

using namespace std;

int main() {
    ll n, sum = 0, cnt = 0, temp; cin >> n;

    for (ll i = 0; i < n; ++i) {
        cin >> temp;
        if (temp %5 == 0) {
            sum += temp;
            ++cnt;
        }
    }

    if (cnt > 0) cout << sum/cnt;
    else cout << 0;

    return 0;
}