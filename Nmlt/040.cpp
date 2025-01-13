#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> A;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        A[x]++;
    }

    int maxx = -1e3-1, times = 0;
    for (auto it: A) {
        if (it.second >= times && it.first > maxx) {
            maxx = it.first;
            times = it.second;
        }
    }

    cout << maxx;

    return 0;
}