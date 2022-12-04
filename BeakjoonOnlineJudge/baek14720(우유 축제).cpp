#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int c = 0;
	int cur;
	while (n--) {
		cin >> cur;
		if (cur == 0) {
			c++;
			break;
		}
	}
	while (n--) {
		int a;
		cin >> a;
		if (cur == 0 && a == 1) {
			c++;
			cur = a;
		}
		else if (cur == 1 && a == 2) {
			c++;
			cur = a;
		}
		else if (cur == 2 && a == 0) {
			c++;
			cur = a;
		}
	}
	cout << c;
	return 0;
}