#include <iostream>

using namespace std;

int main() { 
    int M, N, temp, sum = 0, cnt = 0; cin >> M >> N;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> temp;
            if ((i == 0 || j == 0 || i == M-1 || j == N-1) && temp % 5 == 0) {
                sum += temp;
                ++cnt;
            }
        }
    }

    if (cnt > 0) cout << sum / cnt;
    else cout << -1;

    return 0;
}