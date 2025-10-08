#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x == 1) {
            cout << "NO\n";
        }
        else if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        }
        else { // x == 1
            if (k == 2) {
                if (n % 2 == 1) {
                    cout << "NO\n";
                } else {
                    cout << "YES\n";
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++) cout << 2 << " ";
                    cout << "\n";
                }
            } 
            else { // k >= 3
                cout << "YES\n";
                if (n % 2 == 1) {
                    // Make n-3 with 2s, then one 3
                    cout << (n - 3) / 2 + 1 << "\n";
                    for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
                    cout << 3 << "\n";
                } else {
                    // Make all 2s
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++) cout << 2 << " ";
                    cout << "\n";
                }
            }
        }
    }
}
