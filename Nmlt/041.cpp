#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define pb push_back

using namespace std;

bool isDuplicate(vector<int> temp, int n) {
    bool check = 0;

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n-1; ++i) {
        if (temp[i] == temp[i+1]) {
            check = 1;
            break;
        }
    }

    return check ? 1 : 0;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n), brr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        brr[i] = arr[i];
    }

    if (isDuplicate(brr, n)) {
        cout << "NO" << endl;
        return 0;
    }

    bool increase = 1, decrease = 1;
    int point = -1;
    vector<int> checkIn, checkDe;

    for (int i = 0; i < (n - 1); ++i) {
        if (arr[i] > arr[i + 1]) {
            point = i;
            break;
        }
        checkIn.pb(arr[i]);
    }
    checkIn.pb(arr[point]);

    if (point == -1) {
        cout << "YES" << endl;
        return 0;
    }
    
    for (int i = point + 1; i < n; ++i) {
        checkDe.pb(arr[i]);
    }

    sort(checkDe.begin(), checkDe.end());

    ++point;
    for (int i = checkDe.size() - 1; i >= 0; --i) {
        if (checkDe[i] != arr[point]) {
            cout << "NO";
            return 0;
        }
        ++point;
    }

    cout << "YES";

    return 0;
}