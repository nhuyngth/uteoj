#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];

    for (int i = 0; i < n; ++i) cin >> arr[i];

    int i = 0, j = n-1;

    bool flag = 1;

    while (true) {
        if (arr[i] != arr[j]) {
            flag = 0;
            break;
        }
        
        if (n %2 == 0 && i == (n/2-1) && j == n/2) break;
        if (n %2 == 1 && i == n/2 && j == n/2) break; 

        ++i;
        --j;
    }

    if (flag) cout << "YES";
    else cout << "NO";

    return 0;
}