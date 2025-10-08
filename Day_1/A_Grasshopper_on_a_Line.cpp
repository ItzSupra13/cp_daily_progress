#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        if (k>x || x%k!=0){
            cout << 1 << "\n" << x << "\n";
        }
        else if(k==x){
            cout << 2 << "\n" << k-1 << " " << 1 << "\n";
        }
        else{
            vector<int> arr;
            for(int i=x;i>0;i--){
                if (i%k!=0){
                    arr.push_back(i);
                }
            }
            for(int j: arr){
                if(find(arr.begin(), arr.end(), (x-j)) != arr.end()){
                    cout << 2 << "\n" << j << " " << x-j << "\n";
                    break;
                }
            }
        }
    }
}
