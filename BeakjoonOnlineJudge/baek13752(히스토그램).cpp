#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i <n; i++) {
		int t; cin >> t;
		for (int j = 0; j < t; j++)
			cout << "=";
		cout << endl;
	}
	return 0;
}