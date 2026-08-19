#include <iostream>
using namespace std;
#include <string>

struct Train {
	int win;
	string name;
};

Train train[7] = {
	{15, "summer"},
	{33, "cloe"},
	{24, "summer"},
	{28, "niki"},
	{32, "jenny"},
	{20, "summer"},
	{40, "coco"}
};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	int age;

	cin >> str >> age;

	for (int i = 0; i < 7; i++) {
		if (str == train[i].name && age == train[i].win){
			cout << i;
			break;
		}
	}

	return 0;
}