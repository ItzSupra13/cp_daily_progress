#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long n;
    cin >> n;
    if(n<=4){
        if(n==1) cout << 1 << "\n";
        else if(n==4) cout << "2 4 1 3\n";
        else cout << "NO SOLUTION\n";
        return;
    }
    long n2 = n;
    while(n2>=1){
        cout << n2 << " ";
        n2-=2;
    }
    n2 = n-1;
    while(n2>=1){
        cout << n2 << " ";
        n2-=2;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}