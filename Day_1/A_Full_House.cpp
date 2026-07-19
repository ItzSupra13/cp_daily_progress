#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int cards[5];
    for(int i=0;i<5;i++) cin >> cards[i];
    unordered_map<int, int> freq;
    for(int i=0;i<5;i++) freq[cards[i]]++;
    bool fullHouse = false;
    if (freq.size()==2){
        int c2 = 0, c3 = 0;
        for (auto &p : freq) {
            if (p.second == 2) c2++;
            if (p.second == 3) c3++;
        }
        fullHouse = (c2 == 1 && c3 == 1);
    }
    if (fullHouse==false) cout << "No";
    else cout << "Yes";
}