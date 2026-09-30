#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N;
int T;
vector<int> v[101];
int visited[101];
int coco;
int partner;

/*

즉 이 문제의 핵심은 
"코코와 상대방 사이에 "직접(X)" 간선이 있는가?"가 아니라 
"코코에서 상대방까지 어떻게든 갈 수 있는가?" 이다.

*/

void bfs(int st) {
	queue<int> Q;
	visited[st] = 1;
	Q.push(st);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int i = 0; i < v[cur].size(); i++) {
			int np = v[cur][i];

			if (visited[np])
				continue;

			visited[np] = 1;
			Q.push(np);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int from, to;

		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}

	cin >> coco;
	cin >> partner;

	bfs(coco);

	bfs(coco);

	if (visited[partner])
		cout << "YES";
	else
		cout << "NO";

	return 0;
}