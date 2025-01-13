#include <iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int arr[1000];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    for (int i = k; i < n; ++i) cout << arr[i] << " ";
    for (int i = 0; i < k; ++i) cout << arr[i] << " ";

	return 0;
}