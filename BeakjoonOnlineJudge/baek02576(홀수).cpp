#include <iostream>
using namespace std;
int main() {
	int min = 1e9, sum = 0;
	for (int i = 0; i < 7; i++) {
		int t; cin >> t;
		if (t % 2 == 1) {
			sum += t;
			if (t < min)min = t;
		}
	}
	if(sum!=0)
		cout << sum << endl << min;
	else cout << -1;

	return 0;
}