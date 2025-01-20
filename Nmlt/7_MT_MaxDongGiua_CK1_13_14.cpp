#include <iostream>

using namespace std;

int main() {
    int M, N; cin >> M >> N;
    int maxx = -1e9, temp;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> temp;
            if (i == M / 2 && temp > maxx) maxx = temp;
        }
    }

    cout << maxx;

    return 0;
}