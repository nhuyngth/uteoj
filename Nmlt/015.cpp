#include <iostream>
#define ll long long

using namespace std;

int main() {

    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    
    string no = "NO", yes = "YES";
    
    if (d < a || c > b ) cout << no;
    else cout << yes;
    
    return 0;
}
