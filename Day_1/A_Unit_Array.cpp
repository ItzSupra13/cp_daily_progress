#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int neg = 0, pos = 0, x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == -1) neg++;
            else pos++;
        }
        int operations = 0;
        while (pos < neg) {
            pos++;
            neg--;
            operations++;
        }
        if (neg % 2 == 1) {
            operations++;
            neg--;
            pos++;
        }
        cout << operations << "\n";
    }
}
