#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n), t;
    bool flag = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] < 0) {
            t.pb(v[i]);
            if (flag == 0) flag = 1;
        }
    }

    if (!flag) cout << 0;
    else {
        sort(t.begin(), t.end());
        cout << t[t.size()-1];
    }

    return 0;
}