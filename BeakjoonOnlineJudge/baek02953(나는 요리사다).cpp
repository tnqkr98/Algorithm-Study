#include <iostream>
using namespace std;
int main() {
	int max = 0,res=0;
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int t; cin >> t;
			sum += t;
		}
		if (sum > max) {
			max = sum;
			res = i + 1;
		}
	}
	cout << res << " " << max;
	return 0;
}