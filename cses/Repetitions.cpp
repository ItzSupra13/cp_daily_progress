#include <iostream>
#include <string>
using namespace std;

void solve() {
    string seq;
    cin >> seq;
    long low = 0, high = 0, maxlen = 0;
    for(high=0;high<(long)seq.size();high++){
        if(seq[low]==seq[high]){
            maxlen = max(maxlen, high-low+1);
        }
        else{
            low=high;
        }
    }
    cout << maxlen << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}