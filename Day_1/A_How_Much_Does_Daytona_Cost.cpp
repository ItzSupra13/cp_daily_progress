#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        bool there = false;
        int x;
        for (int i=0;i<n;i++){
            cin >> x;
            if(x==k){
                there = true;
            }
        }
        if (there){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}