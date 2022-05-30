#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int a[3]; cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		cout << "Scenario #" << i << ":" << endl;
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
			cout << "yes" << endl;
		else cout << "no" << endl;
		cout << endl;
	}
	return 0;
}