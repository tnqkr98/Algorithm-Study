#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int nn,k; cin >>nn>> k;
		int p = 0, o =0, e = 0;
		int ps = 0, os = 0, es = 0;
		for(int j = 1;; j++) {
			if (p < k) {
				ps += j;
				p++;
			}
			if (j%2==1 && o < k) {
				os += j;
				o++;
			}
			if (j%2==0 && e < k) {
				es += j;
				e++;
			}
			if (p == k && o == k && e == k) break;
		}
		cout << i << " " << ps << " " << os << " " << es << endl;
	}
	return 0;
}