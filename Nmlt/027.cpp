#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int maxx = 0;
    int loc;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        if (arr[i] > maxx) {
            maxx = arr[i];
            loc = i;
        }
    }

    cout << maxx << " " << loc;

    return 0;
}