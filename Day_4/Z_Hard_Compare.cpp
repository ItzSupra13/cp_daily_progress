#include <iostream>
using namespace std;
#include <cmath>

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    b*log(a)>d*log(c) ? cout << "YES" << "\n" : cout << "NO" << "\n";
}