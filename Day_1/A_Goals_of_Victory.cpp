#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        int total = 0;
        for (int i=1;i<n;i++){
            cin >> x;
            total+=x;
        }
        cout << total*(-1) << "\n";
    }
}
