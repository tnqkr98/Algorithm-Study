#include <iostream>
using namespace std;
int main() {
	while (1) {
		int c, d; cin >> c >> d;
		if (c + d == 0) break;
		int p1, p2, p3,min=1e9;
		p1 = c * 30 + d * 40;
		if (min > p1) min = p1;
		p2 = c * 35 + d * 30;
		if (min > p2) min = p2;
		p3 = c * 40 + d * 20;
		if (min > p3) min = p3;
		cout << min << endl;
	}
	return 0;
}