#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x;
        int tot=0;
        for (int i=0;i<n;i++){
            cin >> x;
            tot += x;
        }
        if (tot%2==0){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}