#include <iostream>
#define ll long long 

using namespace std;

bool isPrime(ll n) {
    if (n < 2) return 0;
    if (n < 4) return 1;
    if (n%2 == 0 || n%3 == 0) return 0;
    for (ll i = 5; i*i <= n; i += 6) {
        if (n % i == 0 || n % (i+2) == 0) return 0;
    }
 
    return 1;
}

int main() {

    ll n; cin >> n;
    if (n <= 0) {
        cout << "NO";
        exit(0);
    }
    if (isPrime(n)) cout << "YES";
    else cout << "NO";

    return 0;
}