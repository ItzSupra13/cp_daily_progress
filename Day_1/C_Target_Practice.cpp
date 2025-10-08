#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        char x;
        int score = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> x;
                if (x=='.') continue;
                score += (min(min(i,j),min(9-i,9-j))%5)+1;
            }
        }
        cout << score << "\n";
    }
}