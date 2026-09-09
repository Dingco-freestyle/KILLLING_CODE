#include <iostream>
using namespace std;
#include <queue>

int arr[11][11];
int visited[11];
int N;

void BFS(int st) {

	queue<int> Q;
	visited[st] = 1;
	Q.push(st);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		cout << cur << " "; 

		for (int i = 0; i < N; i++) {

			if (!arr[cur][i])
				continue;

			if (visited[i])
				continue;

			visited[i] = 1;
			Q.push(i);
		}
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	BFS(0);

	return 0;
}