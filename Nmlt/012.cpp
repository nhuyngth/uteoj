#include <iostream>
#define ll long long 

using namespace std;

int main() {

    ll n; cin >> n;
    
    ll tich = 1;
    
    for (int i = 2; i <= n; ++i) {
            tich *= i;
    }

    cout << tich; 
    
    return 0;
}