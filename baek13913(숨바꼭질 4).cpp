#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, k, d[100001],dp[100001];
queue<int> q;
void bfs() {
	if (q.empty()) return;
	int cur = q.front();
	q.pop();
	if (cur == k) return;
	if (cur + 1 < 100001 && !d[cur + 1]) {
		d[cur + 1] = d[cur]+1;
		dp[cur + 1] = cur;
		q.push(cur + 1);
	}
	if (cur - 1 >= 0 && !d[cur - 1]) {
		d[cur - 1] = d[cur]+ 1;
		dp[cur - 1] = cur;
		q.push(cur - 1);
	}
	if (cur * 2 < 100001 && !d[cur * 2]) {
		d[cur * 2] = d[cur]+1;
		dp[cur *2] = cur;
		q.push(cur * 2);
	}
	bfs();
}
int main() {
	cin >> n >> k;
	d[n] = 0;
	dp[n] = -1;
	q.push(n);
	bfs();
	cout << d[k] << endl;
	vector<int> v = { k};
	while (k != n) {
		v.push_back(dp[k]);
		k = dp[k];
	}
	for (int i = v.size() - 1; i >= 0; i--)
		cout << v[i] << " ";
	return 0;
}