#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int d[10001][3];
int main() {
	int n,max=0; scanf("%d", &n);
	vector<int> v;
	while (n--) {
		int t; scanf("%d", &t);
		v.push_back(t);
		if (t > max) max = t;
	}
	d[1][0] = d[2][0] = d[3][0] = 1;
	d[2][1] = d[3][1] = 1;
	d[3][2] = 1;
	for (int i = 4; i <= max; i++) {
		d[i][0] = 1;
		d[i][1] = d[i - 2][0] + d[i - 2][1];
		d[i][2] = d[i - 3][0] + d[i - 3][1] + d[i - 3][2];
	}
	for (auto i : v) 
		printf("%d\n", d[i][0] + d[i][1] + d[i][2]);

	return 0;
}