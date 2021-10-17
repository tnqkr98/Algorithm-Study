#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int n,gmax=0;
vector<int> a;
void back(int d,vector<bool> visit, int sum,int past) {
	if (d == n-1) {
		for (int i = 0; i < n; i++)
			if (!visit[i])
				sum += a[i];
		gmax = max(sum, gmax);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			back(d + 1, visit, sum + abs(past - a[i]), a[i]);
			visit[i] = 0;
		}
	}
}
int main() {
	cin >> n;
	a = vector<int>(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	vector<bool> visit(n,0);
	for (int i = 0; i < n; i++) {
		visit[i] = 1;
		back(0, visit,0,a[i]);
		visit[i] = 0;
	}
	cout << gmax;
	return 0;
}