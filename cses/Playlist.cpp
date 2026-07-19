#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long int> playlist(n);
    map<long int, int> hash; 
    int maxlen = 0;
    int low = 0, high = 0;
    for(int i=0;i<n;i++){
        cin >> playlist[i];
        if(hash.contains(playlist[i])){
            low = max(low, hash[playlist[i]]+1);
        }
        hash[playlist[i]] = i;
        maxlen = max(maxlen, i-low+1);
    }
    cout << maxlen << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}