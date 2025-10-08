#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        int maxspace = 0;
        int space = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) {
                space++;
                maxspace = max(maxspace, space);
            } else {
                space = 0;
            }
        }
        cout << maxspace << "\n";
    }
}