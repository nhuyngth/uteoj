#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

int gcd (int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() { 
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << gcd(v[0], v[1]);

    return 0;
}