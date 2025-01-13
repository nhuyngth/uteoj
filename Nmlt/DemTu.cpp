#include <iostream>

using namespace std;

int main() { 
    string str; getline(cin, str);
    while (str[0] == ' ') str.erase(0, 1);
    while (str[str.size() - 1] == ' ') str.erase(str.size() - 1, 1);
    int i = 0;
    while (i < str.size()) {
        while (str[i] == ' ' && str[i+1] == ' ') str.erase(i+1, 1);
        ++i;
    }
    int cnt = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') ++cnt;
    }

    cout << cnt + 1;

    return 0;
}