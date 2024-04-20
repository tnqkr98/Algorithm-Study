#include <iostream>
#include <vector>
using namespace std;
int main() {
	int idx = 1;
	while (1) {
		int n; cin >> n;
		if (n == 0) break;
		vector<double> v;
		for (int i = 0; i < n; i++) {
			double a; cin >> a;
			v.push_back(a);
		}
		if (n % 2 == 1) printf("Case %d: %.1f\n",idx++, v[n/2]);
		else printf("Case %d: %.1f\n", idx++, (v[n/2] + v[n/2-1])/2);
	}
	return 0;
}