#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int tot = 1<<n; 
    for (int i=0; i<tot; i++) {
        int gray = i^(i>>1);
        for (int bit=n-1; bit >= 0; bit--) {
            cout << ((gray>>bit) & 1);
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}