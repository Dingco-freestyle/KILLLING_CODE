#include <iostream>
using namespace std;

struct Person {
	int age;
	int height;
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 구조체 변수
	Person a;
	Person b;

	cin >> a.age >> a.height;
	cin >> b.age >> b.height;

	int age_avg = (a.age + b.age) / 2;
	int height_avg = (a.height + b.height) / 2;

	cout << age_avg << ' ' << height_avg;
}