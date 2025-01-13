#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int mat[100][100];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> mat[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > 0; --j) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}