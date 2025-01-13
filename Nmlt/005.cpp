#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    long long a, b, c; 
    cin >> a >> b >> c;
    int maxx = 0, minn = 1000+1;
    
    if (a > maxx) maxx = a;
    if (a < minn) minn = a;
    if (b > maxx) maxx = b;
    if (b < minn) minn = b;
    if (c > maxx) maxx =c;
    if (c < minn) minn = c;
    
    cout << minn << " " << maxx;
        
    return 0;
}