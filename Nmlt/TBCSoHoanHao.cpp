#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

bool equalDiv(int x) {
    // lưu ý: 1 kh là số hoàn hảo
    if (x <= 1) return 0;

    long long sum = 1;

    for (int i = 2; i*i <= x; ++i) {
        if (x % i == 0) {
            sum += i;
            if (i != x / i) {
                sum += x / i;
            }
        }
    }

    return sum == x;
}

int main() { 
    int n, cnt = 0, temp = 0; cin >> n;
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (equalDiv(temp)) {
            sum += temp;
            ++cnt;
        }
    }

    if (cnt > 0) cout << round(sum / cnt);
    else cout << 0;

    return 0;
}