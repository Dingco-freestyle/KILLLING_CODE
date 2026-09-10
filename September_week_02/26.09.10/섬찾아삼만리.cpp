#include <iostream>
using namespace std;
#include <queue>

int N, M;
int cnt = 0;
int arr[100][100];
int visited[100][100];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

struct Point {
	int y, x;
};

Point P;

void BFS(Point st) {
	queue<Point> Q;
	visited[st.y][st.x] = 1;
	Q.push(st);

	// 방문한 좌표를 0으로 밀어버려 다시 탐색하지 않게.
	arr[st.y][st.x] = 0;

	while (!Q.empty()) {
		Point cur = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++) {
			Point next = { cur.y + dy[i], cur.x + dx[i] };

			if (next.x < 0 || next.x >= M || next.y < 0 || next.y >= N)
				continue;
			if (arr[next.y][next.x] == 0)
				continue;
			if (visited[next.y][next.x])
				continue;

			visited[next.y][next.x] = 1;
			arr[next.y][next.x] = 0;
			Q.push(next);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == 0)
				continue;
			else{
				BFS({ i, j });
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}