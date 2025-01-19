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
    int maxx = 0;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (equalDiv(temp) && temp > maxx) {
            maxx = temp;
        }
    }

    cout << maxx;
    
    return 0;
}