#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		int s1 = 0, s2 = 0, s3 = 0;
		int sn1 = 0, sn2 = 0, sn3 = 0;
		for (int j = 1; ; j++) {
			if (sn1 < n) {
				s1 += j;
				sn1++;
			}
			if (sn2 < n && j % 2 == 1) {
				s2 += j;
				sn2++;
			}
			if (sn3 < n && j % 2 == 0) {
				s3 += j;
				sn3++;
			}
			if (sn1 == sn2 && sn2 == sn3) break;
		}
		cout << s1 << " " << s2 << " " << s3 << endl;
	}
	return 0;
}