#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int operations = 0;
        int c=6;
        int flag = 0;
        while(c--){
            if(x.find(s) != string::npos){
                flag =1;
                break;
            }
            x += x;
            operations++;
        }
        if (flag==1){
            cout << operations << "\n";
        }
        else{
            cout << -1 << "\n";
        }

    }
}
