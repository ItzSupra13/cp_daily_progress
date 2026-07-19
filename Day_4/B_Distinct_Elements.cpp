#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n+1);
        for (int i = 1; i <= n; i++) cin >> b[i];
        vector<int> a(n+1);
        a[1] = 1;
        int next_new = 2;
        for (int i = 2; i <= n; i++) {
            long long diff = b[i] - b[i-1];
            if (diff == i) a[i] = next_new++;
            else a[i] = a[1];
        }
        for (int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}
