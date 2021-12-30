#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int d[1000][3], num[1000][3], gmin = 1000001, n;
void dp() {
	for (int i = 1; i < n; i++) {
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + num[i][0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + num[i][1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + num[i][2];
	}
}
int main() {
	cin >> n;
	int a, b, c;
	for (int i = 0; i < n; i++)
		cin >> num[i][0] >> num[i][1] >> num[i][2];
	d[0][0] = num[0][0];
	d[0][1] = d[0][2] = 1000001;
	dp();
	a = min(d[n - 1][1], d[n - 1][2]);
	gmin = min(gmin, a);
	d[0][1] = num[0][1];
	d[0][0] = d[0][2] = 1000001;
	dp();
	b = min(d[n - 1][0], d[n - 1][2]);
	gmin = min(gmin, b);
	d[0][2] = num[0][2];
	d[0][0] = d[0][1] = 1000001;
	dp();
	c = min(d[n - 1][0], d[n - 1][1]);
	gmin = min(gmin, c);
	cout << gmin;
	return 0;
}