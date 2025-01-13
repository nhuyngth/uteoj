#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    v.push_back(x);
    sort(v.begin(), v.end());

    cout << v[(n + 1) / 2];
    return 0;
}