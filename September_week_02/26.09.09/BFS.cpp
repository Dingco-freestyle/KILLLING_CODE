#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N;
int T;
vector<int> v[101];
int visited[101];
int cnt = 0;

void bfs(int st)
{
	queue<int> q;
	visited[st] = 1;
	q.push(st);

	while (!q.empty()){

		int cur = q.front();
		q.pop();
		
		for (int i = 0; i < v[cur].size(); i++) {

			int next = v[cur][i];

			if (visited[next])
				continue;

			else
				cnt += 1;
			

			visited[next] = 1;
			q.push(next);
		}
	}
}

int main()
{
	
	cin >> N;
	cin >> T;

	for (int i = 0; i < T; i++){
		int from, to;
		cin >> from >> to;
		v[from].push_back(to);
		v[to].push_back(from);
	}

	bfs(1);

	cout << cnt;

	return 0;
}
