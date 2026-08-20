#include <iostream>
using namespace std;

void bbq(int a) {

	if (a == 4)
		return;

	bbq(a + 1);
}

int main() {


	bbq(0);


	return 0;
}