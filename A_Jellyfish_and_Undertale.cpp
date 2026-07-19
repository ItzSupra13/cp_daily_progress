#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
        while (t--) {
            long long a, b;
            int n, i;
            cin >> a >> b >> n;
            long long maxt = b;

            long long x;
            for(int i=0;i<n;i++){
                cin >> x;
                maxt+= min(x, a-1);
            }
            cout << maxt << "\n";
        }
    return 0;
}