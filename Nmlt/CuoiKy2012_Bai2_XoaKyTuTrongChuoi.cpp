#include <iostream>
#include <vector>

using namespace std;

int main() { 
    string s;
    getline(cin, s);
    vector<char> v = {'U', 'E', 'O', 'A', 'I'};

    for (int i = 0; i < s.size(); ++i) {
        bool flag = 1;

        for (int j = 0; j < 5; ++j) {
            if (v[j] == s[i]) {
                flag = 0;
                break;
            }
        }

        if (flag) cout << s[i];
    }

    return 0;
}