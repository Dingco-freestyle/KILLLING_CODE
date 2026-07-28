#include <iostream>
using namespace std;

struct Fruit {
	int size;
	int price;
};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	Fruit banana;
	Fruit apple;

	cin >> banana.size >> apple.size;

	int p_banana = banana.size * 250;
	int p_apple = apple.size * 500;

	cout << p_banana + p_apple << "원";

	return 0;
}