#include <iostream>
using namespace std;
int tsum(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) s += i;
	return s;
}
int main() {
	int n; cin >> n;
	while (n--) {
		int w,ts=0; cin >> w;
		for (int i = 1; i <= w; i++) {
			ts += i * tsum(i + 1);
		}
		cout << ts << endl;
	}
	return 0;
}