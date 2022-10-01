#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int b = 0,s=0,l=2;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (a != b) {
			s += 2;
			l = 2;
			b = a;
		}
		else {
			l *= 2;
			s += l;
		}
		if (s >= 100) {
			s = 0;
			l = 2;
			b = 0;
		}
	}
	cout << s;
	return 0;
}