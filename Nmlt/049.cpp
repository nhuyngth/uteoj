#include <iostream>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int arr[1000]; 
    bool isDuplicate = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == x) {
            isDuplicate = 1;
        }
    }

    if (isDuplicate) cout << "YES";
    else cout << "NO";

    return 0;
}