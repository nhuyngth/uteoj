#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int maxx = -1e5-1, maxx2 = -1e5-2, cnt = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > maxx) {
            int temp = maxx;
            maxx = arr[i];
            maxx2 = temp;
        }
        else if (arr[i] > maxx2) maxx2 = arr[i];
    }

    cout << maxx2;

	return 0;
}