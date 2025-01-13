#include <iostream>
#define ll long long

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    ll arr[100][100], sumCol[100];
    for (int i = 0; i < n; ++i) {
        int k = 0;
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            sumCol[k] += arr[i][j];
            ++k;
        }
    }

    for (int i = 0; i < m; ++i) cout << sumCol[i] << " ";
    

    return 0;
}