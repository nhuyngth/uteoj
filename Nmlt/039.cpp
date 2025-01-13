#include <iostream>
#include <map>

using namespace std;

int main() {
    int n; cin >> n;
    map<int, int> A;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        A[x]++;
    }
    
    int ans = 0;

    for (auto it : A) {
        if (it.second > 2) ans++;
    }

    cout << ans;

    /*
    CÁCH 2:
    #include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000]; for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);
    int ans = 0;
    int i = 0;
    
    while (i < n) {
        int cnt = 1;

        for (int j = i+1; j < n; ++j) {
            if (arr[i] != arr[j]) {
                i = j-1;
                break;
            }
            ++cnt;
        }

        if (cnt > 2) ans++;

        ++i;
    }

    cout << ans;

    return 0;
}
    */

    return 0;
}
