#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[1000];
    int minn = 1e5+1;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < minn) minn = arr[i];
    }
    
    cout << minn;

    return 0;
}