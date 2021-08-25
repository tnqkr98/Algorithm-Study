#include <iostream>
#include <memory.h>
using namespace std;
int d[2][100000],s[2][100000];
int fmax(int a, int b, int c) {
	if (a >= b && a>= c) return a;
	if (b >= c && b >= a)return b;
	if (c >= a && c >= b)return c;
}
int main() {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		int lmax = 0;
		for (int j = 0; j < 2; j++) 
			for (int k = 0; k < n; k++) 
				cin >> d[j][k];

		s[0][0] = d[0][0];
		s[1][0] = d[1][0];
		s[0][1] = s[1][0] + d[0][1];
		s[1][1] = s[0][0] + d[1][1];
		if (s[0][1] > lmax) lmax = s[0][1];
		if (s[1][1] > lmax) lmax = s[1][1];

		for (int i = 2; i < n; i++) {
			s[0][i] = fmax(s[1][i - 1], s[1][i - 2], s[0][i - 2]) + d[0][i];
			s[1][i] = fmax(s[0][i - 1], s[1][i - 2], s[0][i - 2]) + d[1][i];
			if (s[0][i] > lmax) lmax = s[0][i];
			if (s[1][i] > lmax) lmax = s[1][i];
		}

		cout << lmax<< endl;
		memset(d, 0, sizeof(d));
		memset(s, 0, sizeof(s));
	}
	return 0;
}