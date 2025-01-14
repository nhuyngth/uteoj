#include <iostream>
#define ll long long

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i*i <= n; i+=6)
        if (n % i == 0 || n % (i+2) == 0) return false;

    return true;
}

bool cntUoc(ll x) {
    int cnt = 2;
    for (int i = 2; i <= x/2; ++i) {
        if (cnt > 3) return 0;
        if (x % i == 0) ++cnt;
    }

    if (cnt > 3 || cnt < 3) return 0; 
    
    return 1;
}

int main() { 
    int L, R; cin >> L >> R;
    int cnt = 0;

    for (int i = L; i <= R; ++i) {
        if (isPrime(i) || cntUoc(i) != 1) continue;
        else cnt++;
    }

    cout << cnt;

    return 0;
}