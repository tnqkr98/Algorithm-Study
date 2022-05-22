#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, a, b; cin >> n >> a >> b;
	double l = sqrt(a*a + b * b);
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		if (t <= l) cout << "DA"<<endl;
		else cout << "NE"<<endl;
	}
	return 0;
}