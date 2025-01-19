#include <iostream>

using namespace std;

int main() { 
    int m, n; cin >> m >> n;
    int arr[50][50];
    int cnt = 0;

    for (int i = 0; i < m; ++i) {
        bool flag = 1;
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
            if (j != 0 && arr[i][j] <= arr[i][j-1]) {
                flag = 0;
            } 
        }
        if (flag) ++cnt;
    }

    cout << cnt;

    return 0;
}