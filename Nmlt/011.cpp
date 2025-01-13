#include <iostream>
#define ll long long 

using namespace std;

int main() {

    int n; cin >> n;
    
    for (int i = n; i >= 2; --i) {
        if (i %2 == 0) cout << i << " ";
    }

    return 0;
}