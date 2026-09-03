#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int seq[100];
int N, M;

bool HappySequence() {
	int max_val = 0;
	int cnt = 0;

	for (int i = 1; i < N; i++) {

		if (seq[i - 1] == seq[i])
			cnt++;

		else
			cnt = 1;

		max_val = max(max_val, cnt);
	}
	return max_val >= M;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	// N : 배열 사이즈 N * N
	// M : 동일한 원소가 연속하여 M개 이상 나오는 구간

	int happy = 0;

	vector<vector<int>> v(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
		}
	}

	// 행
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			seq[j] = v[i][j];
		}
		if (HappySequence())
			happy++;
	}

	// 열
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < N; i++) {
			seq[i] = v[i][j];
		}
		if (HappySequence())
			happy++;
	}

	cout << happy;

	return 0;
}