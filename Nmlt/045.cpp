#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main() {
    int n, m, x, y; cin >> n >> m >> x >> y;
    int v[101][101];
    int temp;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> v[i][j];
        }
    }

    ll sum = 0;

    int upLeftX, upLeftY, upRightX, upRightY, downRightX, downRightY, downLeftX, downLeftY;
    upLeftX = upRightX = downLeftX = downRightX = x;
    upLeftY = upRightY = downLeftY = downRightY = y;

    while (upLeftX > 0 && upLeftY > 0) {
        sum += v[upLeftX][upLeftY];
        upLeftX--;
        upLeftY--;
    }
    while (upRightX > 0 && upRightY <= m) {
        sum += v[upRightX][upRightY];
        upRightX--;
        upRightY++;
    }
    while (downLeftX <= n && downLeftY > 0) {
        sum += v[downLeftX][downLeftY];
        downLeftX++;
        downLeftY--;
    }
    while (downRightX <= n && downRightY <= m) {
        sum += v[downRightX][downRightY];
        downRightX++;
        downRightY++;
    }

    cout << sum - v[x][y]*3;

    return 0;
}