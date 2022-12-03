#include <iostream>
using namespace std;
int main() {
	bool f = 0;
	for (int i = 0; i < 8; i++) {
		int a; cin >> a;
		if (a != 0 && a != 1) f = 1;
	}
	if (f) cout << "F";
	else cout << "S";
	return 0;
}