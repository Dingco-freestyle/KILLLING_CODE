#include <iostream>
using namespace std;
#include <queue>

struct Point {
	int y, x;
};

int arr[100][100];
int visited[100][100];
int height, width;

Point N;
Point T;

int dy[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dx[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

void BFS(Point st) {
	queue<Point> Q;
	visited[st.y][st.x] = 0;
	Q.push(st);

	while (!Q.empty()) {
		Point cur = Q.front();
		Q.pop();

		for (int i = 0; i < 8; i++) {
			Point nt = { cur.y + dy[i], cur.x + dx[i] };

			if (nt.y < 0 || nt.y >= height || nt.x < 0 || nt.x >= width)
				continue;

			if (visited[nt.y][nt.x])
				continue;

			visited[nt.y][nt.x] = visited[cur.y][cur.x] + 1;
				
			Q.push(nt);

		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> height >> width;

	cin >> N.y >> N.x >> T.y >> T.x;

	BFS(N);

	cout << visited[T.y][T.x];

	return 0;
}