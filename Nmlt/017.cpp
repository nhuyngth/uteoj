#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {

    ll a, b; cin >> a >> b;
    
    cout << a*b / gcd(a, b);
    
    return 0;
}
