#include <iostream>

using namespace std;

int main() { 
    int n; cin >> n;
    int arr[200], point = -1, cnt = 1;

    for (int i = 0; i < n; ++i) {   
        cin >> arr[i];
        if (i != 0 && arr[i] <= arr[i - 1] && point == -1) {
            point = i;
        }
    }

    cout << point;

    return 0;
}