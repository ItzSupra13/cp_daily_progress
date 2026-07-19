#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int yfix = d - b;
        int xfix = c - a;
        int minmoves = 0;
        if ( yfix<0 || (yfix==0 && xfix>0) || (yfix>0 && (a+yfix<c))){
            cout << -1 << "\n";
        }
        else{
            minmoves += yfix;
            a += yfix;
            xfix = a - c;
            minmoves += xfix;
            cout << minmoves << "\n";
        }
    }
}