#include <iostream>
using namespace std;
#include <vector>
#include <queue>

struct Edge {
	int next;
	int cost;
};

vector<Edge> v[11];
int N, M, K;
int visited[11];
int cost[11];

void BFS(int st) {
	queue<int> Q;
	visited[st] = 1;
	Q.push(st);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int i = 0; i < v[cur].size(); i++) {
			int next = v[cur][i].next;
			int nextCost = v[cur][i].cost;

			if (visited[next])
				continue;

			visited[next] = 1;

			cost[next] = cost[cur] + nextCost;
			
			Q.push(next);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M >> K;

	for (int i = 0; i < M; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;

		v[from].push_back({ to, cost });
		v[to].push_back({ from, cost });
	}

	// 0번 부터 시작이 보장됨
	BFS(0);

	for (int i = 1; i < N; i++) {

        if (visited[i] && cost[i] <= K)
            cout << i << " ";
    }

	

	return 0;
}