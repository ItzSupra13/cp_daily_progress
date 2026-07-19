#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    string st;
    cin >> st;

    vector<int> fq(26, 0);
    long int odds = 0, oddindex = -1, n=st.size();

    for(char &ch: st){
        fq[ch - 'A']++;
    }

    for(int i=0; i<26;i++){
        if(fq[i]%2!=0){
            odds++;
            oddindex = i;
        }
    }
    if(odds>1){
        cout << "NO SOLUTION\n";
        return;
    }

    string left_half = "";
    for(int i=0; i<26;i++){
        left_half.append(fq[i]/2, (char)('A'+i));
    }

    string right_half = left_half;
    reverse(right_half.begin(), right_half.end());

    if(oddindex!=-1){
        cout << left_half << (char)('A'+oddindex) << right_half << "\n";
    }
    else{
        cout << left_half << right_half << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}