#include <iostream>
#include <deque>
using namespace std;
int d[100001], n, k, kmin = 1e9, kcnt = 1;
void bfs() {
	for (int i = 0; i < 100001; i++)
		d[i] = 1e9;
	deque<int> dq;
	dq.push_front(n);
	d[n] = 0;
	while (!dq.empty()) {
		int cur = dq.front();
		dq.pop_front();
		if (cur == k && d[cur] <= kmin) {
			if (kmin == d[cur]) kcnt++;
			else if (d[cur] < kmin) {
				kcnt = 1;
				kmin = d[cur];
			}
		}
		if (cur + 1 < 100001 && d[cur] + 1 <= d[cur + 1]) {
			d[cur + 1] = d[cur] + 1;
			dq.push_back(cur + 1);
		}
		if (cur - 1 >= 0 && d[cur] + 1 <= d[cur - 1]) {
			d[cur - 1] = d[cur] + 1;
			dq.push_back(cur - 1);
		}
		if (cur * 2 < 100001 && d[cur] + 1 <= d[cur * 2]) {
			d[cur * 2] = d[cur] + 1;
			dq.push_back(cur * 2);
		}
	}
}
int main() {
	cin >> n >> k;
	bfs();
	cout << d[k] << endl << kcnt;
	return 0;
}