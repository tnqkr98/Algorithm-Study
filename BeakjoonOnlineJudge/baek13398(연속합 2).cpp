#include <cstdio>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
int d[100001][2];
int main() {
	int n, m = 0; scanf("%d", &n);
	int num; scanf("%d", &num);
	d[0][0] = num;
	d[0][1] = 0;
	for (int i = 1; i < n; i++) {
		int t; scanf("%d", &t);
		d[i][0] = max(d[i - 1][0] + t, t);
		d[i][1] = max(d[i - 1][0], d[i - 1][1] + t);
		m = max(m, max(d[i][0], d[i][1]));
	}
		
	printf("%d", m);

	return 0;
}