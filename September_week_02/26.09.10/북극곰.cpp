#include <iostream>
using namespace std;
#include <queue>

struct Point {
	int y, x;
};

Point st;

int N, M;
int year_cnt = 0; // 최초 year
int ice_cnt = 0; // 빙산 개수
int arr[76][76];
int visited[76][76];

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int countIce() {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			visited[i][j] = 0;
			// 한 해가 지났다면 visited 초기화 필수다
		}
	}

	int count = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			
			// 이미 방문했다면
			if (visited[i][j])
				continue;

			// 빙산이 아니라면 (== 바다라면, arr[i][j] == 0)
			if (!arr[i][j])
				continue;

			// 빙산 카운팅 증가
			count++;

			queue<Point> Q;
			visited[i][j] = 1;
			Q.push({i, j});

			while (!Q.empty()) {
				Point cur = Q.front();
				Q.pop();

				for (int k = 0; k < 4; k++) {
					Point next = { cur.y + dy[k], cur.x + dx[k] };

					if (next.y < 0 || next.y >= N || next.x < 0 || next.x >= M)
						continue;

					// 이미 방문했다면
					if (visited[next.y][next.x])
						continue;

					// 바다인 경우 continue
					if (!arr[next.y][next.x])
						continue;

					visited[next.y][next.x] = 1;
					Q.push(next);
				}
			}
		}
	}
	return count;
}

void meltIce() {

	// 얼음을 녹이고 값을 새롭게 저장할 배열
	int melt[76][76] = { 0 };

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			// 빙산이 아니면 넘어감
			if (arr[i][j] == 0)
				continue;

			int sea = 0; // 바다 면 개수

			for (int k = 0; k < 4; k++) {
				Point next = { i + dy[k], j + dx[k] };

				if (next.y < 0 || next.y >= N || next.x < 0 || next.x >= M)
					continue;

				if (!arr[next.y][next.x])
					sea++;
			}

			// 기존 맵에서 sea 값만큼 녹음
			melt[i][j] = arr[i][j] - sea;

			// 음수 값 방지
			if (melt[i][j] < 0)
				melt[i][j] = 0;
		}
	}

	// 녹인 값을 반영하여 배열에 저장
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = melt[i][j];
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

	while (1) {
		ice_cnt = countIce(); // 빙산 갯수 구하기

		if (ice_cnt >= 2) {
			cout << year_cnt;
			break;
		}

		if (ice_cnt == 0) {
			cout << 0;
			break;
		}

		meltIce();

		year_cnt++;
	}
	
	return 0;
}