#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n,-1));

    queue<pair<int, int>> q;
    board[0][0] = 0;
    q.push({0,0});

    while(!q.empty()){
        auto [r, c] = q.front();
        q.pop();

        for(int i=0;i<8;i++){
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(nr >= 0 && nr < n && nc >= 0 && nc < n && board[nr][nc] == -1){
                board[nr][nc] = board[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}