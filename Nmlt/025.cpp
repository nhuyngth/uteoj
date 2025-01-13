#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000+1], nev[1000], pos[1000], k = 0, x = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        if (arr[i] < 0) {
            nev[k] = arr[i];
            ++k;
        }
        else {
            pos[x] = arr[i];
            ++x;
        }
    }

    for (int i = 0; i < k; ++i) cout << nev[i] << " ";
    for (int i = 0; i < x; ++i) cout << pos[i] << " ";

    return 0;
}