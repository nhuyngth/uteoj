#include <iostream>

using namespace std;

int main() { 
    string str; getline(cin, str);
    int sum = 0;
    
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }

    cout << sum;

    return 0;
}