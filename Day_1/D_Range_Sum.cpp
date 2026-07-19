#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long L, R;
        cin >> L >> R;
        long long total = R * (R + 1) / 2 - (L - 1) * L / 2;
        cout << total << "\n";
    }
    return 0;
}
