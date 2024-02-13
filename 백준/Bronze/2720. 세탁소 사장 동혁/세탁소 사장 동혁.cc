#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int a[4] = { 25,10,5,1 };
	for (int i = 0; i < n; i++) {
		int c; cin >> c;
		for (int j = 0; j < 4; j++) {
			cout << c / a[j]<<" ";
			c %= a[j];
		}
		cout << endl;
	}
	return 0;
}