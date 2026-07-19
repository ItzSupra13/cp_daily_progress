#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int num = 1;
    int mx = num, mi = num;

    for(int i=0;i<s.size();i++){
        if(s[i]=='>'){
            num--;
            mi = min(mi, num);
        }
        else if(s[i]=='<'){
            num++;
            mx = max(mx, num);
        }
    }
    cout << mx-mi+1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}