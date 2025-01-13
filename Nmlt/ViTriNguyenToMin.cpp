#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int x) {
    if (x < 2) return 0;
    if (x < 4) return 1;
    if (x % 2 == 0 || x % 3 == 0) return 0;
    for (int i = 5; i*i < x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return 0;
    }

    return 1;
}

int main() {
    int n; cin >> n;
    vector<int> v(n), t1, t2;
    int point = -1;
    int minn = 10001;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (isPrime(v[i]) && v[i] < minn) {
            minn = v[i];
            point = i;
        }
    }

    cout << point;

    return 0;
}