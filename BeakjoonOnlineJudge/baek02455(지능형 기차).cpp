#include <iostream>
using namespace std;
int main() {
	int cur = 0,max=0;
	for (int i = 0; i < 4; i++) {
		int a, b; cin >> a >> b;
		cur = cur + b - a;
		if (cur > max) max = cur;
	}
	cout << max;

	return 0;
}