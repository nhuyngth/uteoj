#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    int maxx = 0, minn = 1e9;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] > maxx) maxx = v[i];
        if (v[i] < minn) minn = v[i];
    }
    cout << maxx << " " << minn;
    return 0;
}