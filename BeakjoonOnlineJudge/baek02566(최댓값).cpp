#include <iostream>
using namespace std;
int main() {
	int max = 0, r, c;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			int t; cin >> t;
			if (t > max) {
				max = t;
				r = i;
				c = j;
			}
		}
	cout << max << endl << r+1 << " " << c+1;
	return 0;
}