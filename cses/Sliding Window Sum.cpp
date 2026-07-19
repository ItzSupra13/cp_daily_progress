#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long k, n;
    cin >> n >> k;

    long x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<long> arr(n); 
    arr[0] = x;
    for(int i=1;i<n;i++){
        arr[i] = (arr[i-1]*a + b) % c;
    }

    int low = 0, high = 0;
    long res = 0;
    long current_sum = 0;

    while(high<k){
        current_sum+=arr[high];
        high++;
    }
    res = current_sum;
    while(high<n){
        current_sum = current_sum + arr[high] - arr[low];
        res ^= current_sum;
        high++;
        low++;
    }
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}