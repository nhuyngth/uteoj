#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[1000+1];

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = n; i >0; --i) {
        if (i %2 == 1) cout << arr[i] << " ";
    }

    return 0;
}