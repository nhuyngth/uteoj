#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    int n, x, cnt = 0; cin >> n >> x;
    int temp, sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp % x != 0) {
            sum += temp;
            ++cnt;
        }
    }

    if (cnt == 0) {
        cout << 0;
        return 0;
    }
    double res = (double)sum / cnt;
    cout << round(res);
    return 0;
}