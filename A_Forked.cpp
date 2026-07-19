#include <iostream>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

void solve() {
    long long a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    
    int dx[] = {-1, -1, 1, 1};
    int dy[] = {-1, 1, -1, 1};
    
    set<pair<long long, long long>> king_attacks;
    set<pair<long long, long long>> queen_attacks;
    
    for (int i = 0; i < 4; i++) {
        king_attacks.insert({kx + dx[i] * a, ky + dy[i] * b});
        queen_attacks.insert({qx + dx[i] * a, qy + dy[i] * b});
        king_attacks.insert({kx + dx[i] * b, ky + dy[i] * a});
        queen_attacks.insert({qx + dx[i] * b, qy + dy[i] * a});
    }
    
    int answer = 0;
    for (const auto& pos : king_attacks) {
        if (queen_attacks.count(pos)) {
            answer++;
        }
    }
    
    cout << answer << "\n";
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