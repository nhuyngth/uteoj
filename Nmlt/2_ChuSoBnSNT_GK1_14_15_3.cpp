#include <iostream>
#include <string>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i*i <= n; i+=6)
        if (n % i == 0 || n % (i+2) == 0) return false;

    return true;
}

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (isPrime(s[i] - '0')) ++cnt;
    }

    cout << cnt;

    return 0;
}