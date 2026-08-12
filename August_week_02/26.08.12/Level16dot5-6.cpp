#include <iostream>
using namespace std;
#include <string>

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int maxIndex = 0;
	int max = 0;
	int minIndex = 0;
	int min = str[0];

	for (int i = 0; i < str.length(); i++) {
		if (max < str[i]){
			max = str[i];
			maxIndex = i;
		}
		else if (min > str[i]) {
			min = str[i];
			minIndex = i;
		}
 	}

	cout << maxIndex << "\n"; 
	cout << minIndex;

	return 0;
}