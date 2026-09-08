#include <iostream>
using namespace std;
#include <algorithm>

int N;
int min_val = 999;
int arr[100][100];
int visited[100];
int end_node = 5;

void dfs(int now, int cost, int level) {

	/*

	종료 조건이 의문이다.
	visited 특성상 출발점을 마킹하는데...
	다시 돌아올 지점이 출발 지점이므로 이미 마킹이 되어있다...

	-> 해결 방법은 변수를 하나 더 두어 노드가 N만큼 다 돌면 되게 하는것

	*/
	
	if (level == N) {
		
		// 출발점으로 돌아갈 때 cost값도 더해줘야함.
		if (arr[now][0]) {
			min_val = min(min_val, cost + arr[now][0]);
		}

		return;
	}

	for (int i = 0; i < N; i++) {

		if (visited[i])
			continue;

		if (!arr[now][i])
			continue;

		visited[i] = 1;

		dfs(i, cost + arr[now][i], level + 1);

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

	visited[0] = 1;
	
	dfs(0, 0, 1);

	cout << min_val;

	return 0;
}
