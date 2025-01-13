#include <iostream>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int arr[1000], cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == x) ++cnt;
    }

    cout << cnt;

    return 0;
}