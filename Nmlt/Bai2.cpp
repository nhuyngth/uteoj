#include <iostream>
#include <set>

using namespace std;

int main() { 
    int n; cin >> n;
    set<double> s;
    double temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        s.insert(temp);
    }

    cout << s.size();

    return 0;
}