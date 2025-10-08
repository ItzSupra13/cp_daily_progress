#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> twos;
        int val;
        for (int i=0;i<n;i++){
            cin >> val;
            if (val==2) twos.push_back(i);
        }
        if (twos.size()==0){
            cout << 1 << "\n";
        }
        else if (twos.size()%2!=0) cout << -1 << "\n";
        else{
            cout << twos[twos.size()/2-1]+1 << "\n";
        }
    }
}
