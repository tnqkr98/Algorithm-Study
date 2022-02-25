#include <iostream>
using namespace std;
int main() {
	while (1) {
		int n; cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++)
				cout << "*";
			cout << endl;
		}
	}
	return 0;
}