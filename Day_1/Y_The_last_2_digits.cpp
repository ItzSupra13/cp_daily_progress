#include <iostream>
using namespace std;
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long result = 1;
    result = (a % 100) * (b % 100) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;
    cout << result << "\n";
    return 0;
}
