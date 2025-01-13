#include <iostream>
#include <string>
#define ll long long    

using namespace std;

int main() { 
    ll n; cin >> n;
    string str; cin >> str;
    ll i = 0, sum = 0;

    while (i < n) {
        if (str[i] >= '0' && str[i] <= '9') {
            string temp = "";
            for (ll j = i; j < n; ++j) {
                if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) break;
                temp += str[j];
            }
            i += temp.size() - 1;
            sum += stoll(temp);
        }
        ++i;
    }

    cout << sum;

    return 0;
}