#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s.front() != s.back()) {
        s.front() = s.back(); 
    }
    cout << s << "\n";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}