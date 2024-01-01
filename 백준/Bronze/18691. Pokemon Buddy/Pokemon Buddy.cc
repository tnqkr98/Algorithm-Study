#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[4] = { 0,1,3,5 };
	for (int i = 0; i < n; i++) {
		int g, c, e; cin >> g >> c >> e;
		if (e <= c) {
			cout << 0 << endl;
			continue;
		}
		cout << (e - c) * arr[g] << endl;
	}
	return 0;
}