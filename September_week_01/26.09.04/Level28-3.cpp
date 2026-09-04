#include <iostream>
using namespace std;

char c[8] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };

int arr[8][8] = {
	{0, 1, 1, 0, 0, 0, 0, 1}, // A
	{1, 0, 0, 0, 0, 0, 0, 0}, // B
	{1, 0, 0, 1, 1, 0, 1, 0}, // C
	{0, 0, 1, 0, 0, 1, 0, 0}, // D
	{0, 0, 1, 0, 0, 0, 0, 0}, // E
	{0, 0, 0, 1, 0, 0, 0, 0}, // F
	{0, 0, 1, 0, 0, 0, 0, 0}, // G
	{1, 0, 0, 0, 0, 0, 0, 0}  // H
};

void run(char target) {

	// 1. 입력받은 노드의 인덱스 찾기
	int targetIdx = 0;

	for (int i = 0; i < 8; i++) {
		if (c[i] == target) {
			targetIdx = i;
			break;
		}
	}

	// 2. 부모 노드 찾기
	int parentIdx = -1;

	for (int i = 0; i < 8; i++) {
		if (arr[i][targetIdx] == 1) {
			parentIdx = i;
			break;
		}
	}

	// 3. 부모가 없으면 "없음"
	if (parentIdx == -1) {
		cout << "없음";
		return;
	}

	// 4. 부모와 연결된 노드 중 자기 자신을 제외하고 출력
	bool found = false;

	for (int i = 0; i < 8; i++) {
		if (arr[parentIdx][i] == 1 && i != targetIdx) {
			cout << c[i] << " ";
			found = true;
		}
	}

	if (!found) {
		cout << "없음";
	}
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	char ch;
	cin >> ch;

	run(ch);

	return 0;
}