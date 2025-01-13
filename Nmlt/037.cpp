#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < n; ++i) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}