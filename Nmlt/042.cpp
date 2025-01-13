#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<ll>> pascal(n);

    if (n == 1) {
        cout << 1;
        return 0;
    }
    
    for (ll i = 0; i < n; ++i) {
        pascal[i].resize(i+1);
        pascal[i][0] = pascal[i][i] = 1;
    
        for (ll j = 1; j < i; ++j) {
            pascal[i][j] += pascal[i - 1][j] + pascal[i - 1][j - 1];
        }
    }

    for (auto row : pascal) {
        for (ll num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}