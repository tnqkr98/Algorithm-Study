#include <iostream>
using namespace std;
int main() {
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a + b == 0)break;
		if (a > b) cout << "Yes" << endl;
		else cout << "No" << endl;
	}


	return 0;
}