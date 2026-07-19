#include <iostream>

using namespace std;

int main() {
    long int t;
    if (cin >> t) {
        while (t--) {
            long long n, k, x;
            cin >> n >> k >> x;

            long long lb = k*(k+1)/2;
            long long ub = k*n - k*(k-1)/2;
            if(lb<=x && x<=ub){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}