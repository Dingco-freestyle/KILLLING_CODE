#include <iostream>
using namespace std;
#include <algorithm>

int N;
int st, en;
int arr[10][10];
int visited[10];
int min_val = 999;
int max_val = 0;

void dfs(int now, int cost) {

	if (now == en) {
		if (cost > max_val)
			max_val = cost;

		if (cost < min_val)
			min_val = cost;

		return;
	}

	for (int i = 0; i < N; i++) {

		// 이미 방문한 Node 가지치기
		if (visited[i])
			continue;

		// 항공편이 없다( == 0)
		if (!arr[now][i])
			continue;

		visited[i] = 1;

		dfs(i, cost + arr[now][i]);

		visited[i] = 0;

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

	cin >> st >> en;

	visited[st] = 1;
	dfs(st, 0);

	cout << min_val << "\n";
	cout << max_val;

	return 0;
}