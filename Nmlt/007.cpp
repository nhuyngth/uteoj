#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    double R;
    cin >> R;

    double area = R*R*3.14;

    stringstream ss;
    ss << fixed << setprecision(2) << area;

    string str = ss.str();

    cout << str;

    return 0;
}
