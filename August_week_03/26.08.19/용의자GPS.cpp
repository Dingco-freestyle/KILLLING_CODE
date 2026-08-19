#include <iostream>
using namespace std;

struct coode{
	int y, x;
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[4][3] = { 0 };

	coode input[4];
	
	for (int i = 0; i < 4; i++) {
		cin >> input[i].y >> input[i].x;
	}

	// 입력 받은 input 배열의 좌표에 해당하는 곳을 arr배열 값을 5로 바꾸는 코드
	for (int i = 0; i < 4; i++) {
		arr[input[i].y][input[i].x] = 5;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}