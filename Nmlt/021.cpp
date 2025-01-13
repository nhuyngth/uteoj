#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] %2 == 0) ++cnt;
    }
    
    cout << cnt;

    return 0;
}