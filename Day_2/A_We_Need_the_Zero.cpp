#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> vals(n);
        for (int i=0;i<n;i++){
            cin >> vals[i]; 
        }
        long long tot = 0;
        for (int i=0;i<n;i++){
            tot ^= vals[i]; 
        }
        if(n%2==1){
            cout << tot << "\n";
        }
        else{
            if (tot==0){
                cout << tot << "\n";
            }
            else cout << -1 << "\n";
        }
    }
}
