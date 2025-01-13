#include <iostream>
#include <vector>
#define pb push_back

using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    vector<int> arr(n + 1);
    int total = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        total += arr[i];
    }

    cin >> x >> y;

    if (x == y) {
        cout << 0;
        return 0;
    }

    int leftRight = 0, rightLeft = 0;
    for (int i = 1; i <= n; ++i) total += arr[i];

    if (x < y) {
        for (int i = x; i < y; ++i) leftRight += arr[i];
    } else {
        for (int i = x; i <= n; ++i) leftRight += arr[i];
        for (int i = 1; i < y; ++i) leftRight += arr[i];
    }

    rightLeft = total - leftRight;

    if (leftRight > rightLeft) cout << rightLeft;
    else cout << leftRight;

    return 0;
}
