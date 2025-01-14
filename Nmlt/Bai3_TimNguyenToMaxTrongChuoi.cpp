#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i*i <= n; i+=6)
        if (n % i == 0 || n % (i+2) == 0) return false;

    return true;
}


int main() { 
    string str;
    getline(cin, str);
    str += ' ';
    int i = 0, maxx = 0;

    while (i < str.size()) {
        if (str[i] >= '0' && str[i] <= '9') {
            string temp = "";
            for (int j = i; j < str.size(); ++j) {
                if ((str[j] >= 'a' && str[j] <= 'z') || str[j] == ' ') {
                    int res = stoi(temp);
                    if (isPrime(res) && res > maxx) maxx = res;
                    i += temp.size() - 1;
                    break;
                }
                temp += str[j];
            }
        }
        ++i;
    }    

    cout << maxx;

    return 0;
}