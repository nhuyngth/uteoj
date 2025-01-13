#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int maxx = 0, cnt = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > maxx) {
            maxx = arr[i];
        }
    }

    for (int i = 0; i < n-1; ++i) {

        bool flag = 1;

        for (int j = i+1; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                flag = 0;
                break;
            }
        }

        if (flag) ++cnt;
    }

    cout << cnt;

	return 0;
}