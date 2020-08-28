#include <iostream>
#include <math.h>
#define M 10007
using namespace std;
int d[501][1001];
int ppow(int n, int p) {
	int res = n;
	if (p == 0) return 1;
	for (int i = 0; i < p - 1; i++) {
		res *= n;
		res %= M;
	}
	return res;
}
int main() {
	int n,res=0;
	cin >> n;
	for (int i = 0; i <= n/2; i++) 
		for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0) {
				d[i][j] = 1;
				continue;
			}
			d[i][j] = d[i - 1][j] + d[i][j - 1];
			d[i][j] %= M;
		}
	
	for (int i = 0; i <= n / 2; i++) {
		if (i == 0) {
			res += 1;
			continue;
		}
		res += d[i][n-i*2]*ppow(2,i);
		res %= M;
	}
	cout << res;
	return 0;
}