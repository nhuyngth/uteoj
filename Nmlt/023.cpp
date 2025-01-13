#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int n; cin >> n;
    int temp, sum = 0;
    int minn = 1e5+1;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        sum += temp;
    }
    double ans = (double) sum/n;
    
    stringstream ss;
    ss << fixed << setprecision(3) << ans;

    string str = ss.str();

    cout << str;

    return 0;
}