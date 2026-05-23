#include <iostream>
using namespace std;
#include <queue>
#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int n, m;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		queue<pair<int, int>> Q;
		vis[0][0] = 1;
		Q.push({ 0, 0});

		while (!Q.empty()) {
			pair<int, int> cur = Q.front();
			Q.pop();

			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= n || ny < 0 || ny >= m)
					continue;
				if (vis[nx][ny] || board[nx][ny] != 1)
					continue;

				vis[nx][ny] = 1;
				board[nx][ny] = board[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}
		int ans = 0;
		if (board[n - 1][m - 1 == 1])
			ans = -1;
		else 
			ans = board[n - 1][m - 1];
		
		cout << "#" << i << ' ' << ans << "\n";
	}
	return 0;
}
