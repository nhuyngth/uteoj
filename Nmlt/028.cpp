#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int temp, nev[1000], pos[1000], k = 0, x = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> temp;

        if (temp < 0) {
            nev[k] = temp;
            ++k;
        } else {
            pos[x] = temp;
            ++x;
        }
    }

    int i = 0, j = 0;
    while (true) {
        if (i == k && j == x) break;
        if (i != k && i < k) {
            cout << nev[i] << " ";
            ++i;
        }
        if (j != x && j < x) {
            cout << pos[j] << " ";
            ++j;
        }
    }

    return 0;
}