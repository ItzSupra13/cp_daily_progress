#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n, x, odd=0,even=0;
        cin >> n;
        if (n%2!=0) {
            cout << -1 << "\n";
            return 0;
        }
        for(int i=0;i<n;i++){
            cin >> x;
            if (x%2==0) even++;
            else odd++;
        }
        cout << abs(even-odd)/2 << "\n";
    }
}