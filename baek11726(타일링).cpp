#include <iostream>
#define MOD 10007
using namespace std;
int d[1001][1001];
int main() {
	int n,a,b,c=0;
	cin >> n;
	a = n; b = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n/2; j++) {
			if (j == 0 || i==0) {
				d[i][j] = 1;
				continue;
			}
			d[i][j] = (d[i][j - 1] + d[i - 1][j])%MOD;
			
		}
	}
	while (a >= 0) {
		c = (c+ d[a][b])%10007;
		a -= 2;
		b++;
	}
	cout << c;
	return 0;
}