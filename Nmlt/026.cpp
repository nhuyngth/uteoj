#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int dis = 0;

    cin >> arr[0];

    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        int temp = abs(arr[i] - arr[i-1]);
        if (temp > dis) dis = temp;
    }

    cout << dis;

    return 0;
}