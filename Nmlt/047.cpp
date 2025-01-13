#include <iostream>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int mat[101][101];

    int k = 0;

    int left = 1, right = m, top = 1, bottom = n;
    
    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; ++i) {
            mat[top][i] = ++k;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            mat[i][right] = ++k;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                mat[bottom][i] = ++k;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                mat[i][left] = ++k;
            }
            left++;
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}