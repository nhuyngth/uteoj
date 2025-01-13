#include <iostream>

using namespace std;

int main() {
    int K; cin >> K;
    double dqt, dt;
    cin >> dqt >> dt;
    if (K == 21) {
        if ((dqt + dt) >= 7.9) cout << "Pass";
        else cout << "Fail";
    }
    else {
        if ((dqt + dt) >= 9.9) cout << "Pass";
        else cout << "Fail";
    }

    return 0;
}