#include <iostream>
#include <cmath>

using namespace std;

int main() { 
    double x; cin >> x;
    x = abs(x);
    int X = ceil(x);
    
    if (X % 2 == 0) X++;

    cout << X; 

    return 0;
}