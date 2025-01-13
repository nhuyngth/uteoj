#include <iostream>
#define ll long long

using namespace std;

int main() {
    ll n; cin >> n;
    ll arr[1000];
    int cntPos = 0, cntNeg = 0;   

    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > 0) cntPos++;
        if (arr[i] < 0) cntNeg++;
    }

    if (cntPos == n) {
        cout << n;
        return 0;
    }
    
    if (cntNeg == n) {
        cout << 0;
        return 0;
    }

    int i = 0, len = 0;

    while (i < n) {
        int temp = 1;

        if (arr[i] > 0) {
            for (int j = i+1; j < n; ++j) {
                if (arr[j] > 0) ++temp;
                else break;
            }
            if (temp > len) len = temp;
        }

        i += temp;
    }

    cout << len;

    return 0;
}