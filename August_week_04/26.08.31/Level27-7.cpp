#include <iostream>
using namespace std;
#include <vector>

 int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> Number(6);
	vector<char> Command(6);
	vector<int> tmp;
	int flag[6] = { 0 };

	for (int i = 0; i < 6; i++) {
		cin >> Number[i];
	}

	for (int i = 0; i < 6; i++) {
		cin >> Command[i];
	}

	int idx_max = 0;
	int idx_min = 0;

	for (int i = 0; i < 6; i++) {
		int min = 999;
		int max = 0;

		if (Command[i] == 'm') {
			for (int j = 0; j < 6; j++) {
				if (!flag[j]) {

					if (min > Number[j]) {
						min = Number[j];
						idx_min = j;
					}
				}
				else {
					continue;
				}
			}
			tmp.push_back(min);
			flag[idx_min] = 1;
		}

		if (Command[i] == 'x') {
			for (int j = 0; j < 6; j++) {
				if (!flag[j]) {

					if (max < Number[j]) {
						max = Number[j];
						idx_max = j;
					}
				}
				else {
					continue;
				}
			}
			tmp.push_back(max);
			flag[idx_max] = 1;
		}
	}

	for (int a : tmp) {
		cout << a;
	}

	return 0;
}