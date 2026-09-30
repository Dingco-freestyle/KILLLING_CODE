#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N, M;
int R;
int K;
int answer = 0;

vector<int> v[11];
int visited[11];

void BFS(int st) {
	queue<int> Q;

	// 시작점은 버스 환승 횟수를 0회로 표현해야 하므로 1이 아닌 0으로 초기화
	visited[st] = 0;
	Q.push(st);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int k = 0; k < v[cur].size(); k++) {
			int np = v[cur][k];

			if (visited[np] != -1)
				continue;
			
			visited[np] = visited[cur] + 1;
			Q.push(np);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int from, to;

		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}

	cin >> R >> K;
	// R : 직장이 존재하는 지역
	// K : 버스 탑승 횟수

	memset(visited, -1, sizeof(visited));

	BFS(R);

	// R부터 버스를 K번 이하로 환승할 때 갈 수 있는 지역들을 카운팅

	for (int i = 1; i <= N; i++) {
		if (visited[i] != -1 && visited[i] <= K)
			answer += 1;
	}
	
	cout << answer;

	return 0;
}