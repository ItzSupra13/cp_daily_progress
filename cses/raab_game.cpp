#include <iostream>
using namespace std;

void solve() {
    int a,b,n;
    cin >> n >> a >> b;
    if(((a == 0 && b > 0) || (b == 0 && a > 0) || (a + b > n)) || a+b>n){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    int d = n - (a+b);
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << "\n";
    for(int i= 1; i<=d; i++){
        cout << i << " ";
    }
    for(int i= d+1+a; i<=n;i++){
        cout << i << " ";
    }
    for(int i=d+1;i<d+1+a;i++){
        cout << i << " ";
    }
    cout << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}