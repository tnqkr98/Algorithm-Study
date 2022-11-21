#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int sa=0, sb=0;
	while (n--) {
		int a, b; cin >> a >> b;
		if (a > b) {
			sa += a + b;
		}
		else if (a == b) {
			sa += a;
			sb += b;
		}
		else {
			sb += a + b;
		}
	}
	cout << sa << " " << sb;
	return 0;
}