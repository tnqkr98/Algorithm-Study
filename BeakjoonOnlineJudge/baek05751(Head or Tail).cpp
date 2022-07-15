#include <iostream>
using namespace std;
int main() {
	while (1) {
		int n; cin >> n;
		if (n == 0) break;
		int m = 0, j = 0;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			if (a) j++; else m++;
		}
		cout << "Mary won " << m << " times and John won " << j << " times" << endl;
	}


	return 0;
}