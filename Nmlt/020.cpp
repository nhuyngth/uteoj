#include <iostream>
#include <map>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    string a = to_string(A), b = to_string(B);

    if (a[0] == a[1]) a = a[0];
    if (b[0] == b[1]) b = b[0];

    int cnt = 0;
    
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < b.size(); ++j) {
            if (b[j] == a[i]) ++cnt;
        }
    }

    if (cnt == 1) cout << 1;
    else cout << 0;



    return 0;
}