#include <iostream>
#include <cmath>
using namespace std;

bool ispInt(double x){
    return (floor(x)==ceil(x)) && x>=0;
}

void solve() {
    double a, b;
    cin >> a >> b;
    double c = (2*a-b)/3, d = (2*b-a)/3;
    if(ispInt(c) && ispInt(d)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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