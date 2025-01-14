#include <iostream>
#define ll long long

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int arr[50][50];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int maxx = -1e9;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (n - i >= k && n - j >= k) {
                int sum = 0;
                for (int ii = i; ii < k + i; ++ii) {
                    for (int jj = j; jj < k + j; ++jj) {
                        sum += arr[ii][jj];
                    }
                }
                if (sum > maxx) maxx = sum;
            }
        }
    }

    if (maxx == -1e9) cout << 0;
    else cout << maxx;

    return 0;
}