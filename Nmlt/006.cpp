#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    long long a, b, c; 
    cin >> a >> b >> c;
    
    if (a+b > c && a+c > b && b+c > a) cout << "YES";
    else cout << "NO";
    
    return 0;
}