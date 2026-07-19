#include <iostream>
#include <string>
using namespace std;

void solve() {
    long long k;
    cin >> k;

    long long n = 1;
    long long count = 9;
    long long start_num = 1;
    while (k > n*count) {
        k -= n*count;
        n++;
        count*=10;
        start_num*=10;
    }
    long long num = start_num + (k-1)/n;

    string q = to_string(num);
    cout << q[(k-1)%n] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}