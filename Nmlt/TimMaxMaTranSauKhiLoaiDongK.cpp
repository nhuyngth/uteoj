#include <iostream>

using namespace std;

int main() { 
    int m, n, k; cin >> m >> n >> k;
    long long temp, maxx = -1e9;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            if (i != k && maxx < temp) {
                maxx = temp;
            }
        }
    }
    cout << maxx;

    return 0;
}