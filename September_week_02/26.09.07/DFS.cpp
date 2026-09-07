#include <iostream>
using namespace std;
#include <algorithm>


struct Point {
	int y, x;
};

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int N;
Point st, en;
int arr[10][10];
int visited[10][10];
int total_cnt;
int max_cost = -21e8;

void func(Point cp, int cost) {

	if (cp.y == en.y && cp.x == en.x) {
		max_cost = max(cost, max_cost);
		total_cnt++;
		return;
	}

	for (int i = 0; i < 4; i++) {
		Point np = { cp.y + dy[i], cp.x + dx[i] };
		if (np.y < 0 || np.x < 0 || np.y >= N || np.x >= N)
			continue;

		// -1은 갈 수가 없기에 가지치기
		if (arr[np.y][np.x] == -1)
			continue;

		if (visited[np.y][np.x])
			continue;

		visited[np.y][np.x] = 1;

		func(np, cost + arr[np.y][np.x]);

		visited[np.y][np.x] = 0;

	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	cin >> st.y >> st.x;
	cin >> en.y >> en.x;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	// 시작 좌표 방문 처리
	visited[st.y][st.x] = 1;

	// 시작 좌표도 먹고 들어가야함
	func(st, arr[st.y][st.x]);

	cout << max_cost << " " << total_cnt;

	return 0;
}