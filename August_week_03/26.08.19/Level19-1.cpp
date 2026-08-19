#include <iostream>
using namespace std;

// Direct ¹è¿­
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0 , 0, -1, 1};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3][3] = { {3, 5, 4},
					  {1, 1, 2},
					  {1, 3, 9} };

	int x, y;
	cin >> y >> x;

	int sum = 0;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3) {
			sum += arr[ny][nx];
		}
	}

	cout << sum;
	
	return 0;
}