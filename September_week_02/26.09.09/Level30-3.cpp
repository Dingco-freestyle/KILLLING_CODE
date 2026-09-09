#include <iostream>
using namespace std;
#include <queue>

int arr[10][10] = {
	{0, 1, 0, 0, 1, 0},
	{0, 0, 1, 0, 0, 1},
	{0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
};
int visited[10];
int K;

void BFS(int st) {
	queue<int> Q;
	visited[st] = 1;
	Q.push(st);

	while (!Q.empty()) {
		
		int cur = Q.front();
		cout << cur << " ";
		Q.pop();
		
		for (int i = 0; i < 6; i++) {

			if (visited[i])
				continue;

			if (!arr[cur][i])
				continue;

			visited[i] = 1;
			Q.push(i);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K;

	BFS(K);

	return 0;
}