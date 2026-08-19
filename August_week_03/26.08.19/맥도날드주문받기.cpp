#include <iostream>
using namespace std;
#include <string>

struct MC {

	string burger1;
	string burger2;

};

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	MC bob, tom;

	cin >> bob.burger1;
	cin >> bob.burger2;
	cin >> tom.burger1;
	cin >> tom.burger2;

	cout << "bob.burger1=" << bob.burger1.length() << endl;
	cout << "bob.burger2=" << bob.burger2.length() << endl;
	cout << "tom.burger1=" << tom.burger1.length() << endl;
	cout << "tom.burger2=" << tom.burger2.length();

	return 0;
}