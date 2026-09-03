#include <iostream>
using namespace std;
#include <queue>

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> Q;
	int N;
	int K;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		Q.push(i);
	}

	while (Q.size() != 1) {
		for (int i = 0; i < K - 1; i++) {
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front() << " ";
		Q.pop();
	}
	cout << Q.front();

	return 0;
}