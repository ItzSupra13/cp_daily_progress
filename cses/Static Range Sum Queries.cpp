#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long int n, q;
    cin >> n >> q;
    vector<long int> arr(n);
    long int pref = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        arr[i] += pref;
        pref = arr[i];
    }
    while(q--){
        long int a, b;
        cin >> a >> b;
        a = a-2;
        b--;
        if(a<0){
            cout << arr[b] << "\n";
        }
        else{
            cout << (arr[b]-arr[a]) << "\n";
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}