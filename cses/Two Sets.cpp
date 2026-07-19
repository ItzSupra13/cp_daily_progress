#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> inset(n+1, 0);
    long long sum = n*(n+1)/2;
    if(sum%2!=0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n"; 
    long long i = n;
    sum/=2;
    while(sum>=i){
        inset[i] = 1;
        sum-= i;
        i--;
    }
    if(sum>0){
        inset[sum] = 1;
        i--;
    }
    cout << n-i << "\n";
    for(long long j=1;j<=n;j++){
        if(inset[j]==1){
            cout << j << " ";
        }
    }
    cout << "\n";
    cout << i << "\n";
    for(long long j=1;j<=n;j++){
        if(inset[j]==0){
        cout << j << " ";
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}