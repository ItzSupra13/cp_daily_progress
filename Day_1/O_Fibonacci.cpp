#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a = 0, b = 1;
    if (n == 1) cout << 0;
    else if (n == 2) cout << 1;
    else {
        long long c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b;
    }
}
