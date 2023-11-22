#include <iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	if (a >= 1000 && (b >= 8000 || c >= 260)) {
		cout << "Very Good";
	}
	else if (a >= 1000) {
		cout << "Good";
	}
	else {
		cout << "Bad";
	}

	return 0;
}