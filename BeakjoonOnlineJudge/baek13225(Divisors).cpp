#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		int s = 1;
		for (int j = 1; j <= a / 2; j++) {
			if (a % j == 0) s++;
		}
		cout << a << " " << s << endl;
	}
	return 0;
}