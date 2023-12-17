#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		char b; cin >> b;
		for (int j = 0; j < a; j++) {
			cout << b;
		}
		cout << endl;
	}
	return 0;
}