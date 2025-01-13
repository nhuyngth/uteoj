#include <iostream>
#include <set>

using namespace std;

int main() {
    int n; cin >> n;
    set<int> A;
    int temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        A.insert(temp);
    }
    
    for (int i : A) cout << i << " ";

    return 0;
}