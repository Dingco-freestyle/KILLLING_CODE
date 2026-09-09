#include <iostream>
using namespace std;
#include <queue>

int arr[5][5];
int visited[5][5];
int input_y, input_x;

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

struct Point {
	int y, x;
};

void BFS(Point st) {
	queue<Point> Q;
	visited[st.y][st.x] = 1;
	arr[st.y][st.x] = 1;
	Q.push(st);

	while (!Q.empty()) {

		Point cur = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++) {

			Point np = { cur.y + dy[i], cur.x + dx[i] };

			// 맵 범위 check
			if (np.y < 0 || np.y >= 5 || np.x < 0 || np.x >= 5)
				continue;

			// 벽 check
			if (arr[np.y][np.x] == -1)
				continue;

			// 방문한 곳 check
			if (visited[np.y][np.x] == 1)
				continue;

			visited[np.y][np.x] = 1;
			arr[np.y][np.x] = arr[cur.y][cur.x] + 1;
			Q.push(np);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> input_y >> input_x;

	BFS({ input_y, input_x });

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
