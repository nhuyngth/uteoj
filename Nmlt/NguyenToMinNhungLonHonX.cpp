#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define pb push_back    

using namespace std;

bool isPrime(int x) {
    if (x < 2) return 0;
    if (x < 4) return 1;
    if (x %2 == 0 || x %3 == 0) return 0;
    for (int i = 5; i*i <= x; i += 6) {
        if (x % i == 0 || x % (i+2) == 0) return 0;
    }
    return 1;
}

int main() { 
    int n, x; cin >> n >> x;
    vector<int> v(n), t;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (isPrime(v[i])) t.pb(v[i]);
    }

    sort(t.begin(), t.end());

    for (auto num : t) {
        if (num > x) {
            cout << num;
            return 0;
        }
    }

    cout << 0;

    return 0;
}