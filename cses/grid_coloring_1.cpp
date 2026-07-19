#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                if (grid[i][j] == 'A') {
                    grid[i][j] = 'B';
                } else {
                    grid[i][j] = 'A';
                }
            } else {
                if (grid[i][j] == 'C') {
                    grid[i][j] = 'D';
                } else {
                    grid[i][j] = 'C';
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << grid[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}