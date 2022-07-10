#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct mv {int m, v;};
struct cmp {
	bool operator()(mv a, mv b) {
		if (a.m > b.m) return 1;
		else if (a.m == b.m) {
			if (a.v < b.v) return 1;
		}
		return 0;
	}
};
priority_queue<mv, vector<mv>, cmp> pq;
priority_queue<long long> spq;
int main() {
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int m, v; cin >> m >> v;
		pq.push({ m,v });
	}
	vector<int> c;
	for (int i = 0; i < k; i++) {
		int a; cin >> a;
		c.push_back(a);
	}
	long long sum = 0;
	sort(c.begin(), c.end());
	for (int i = 0; i < k; i++) {
		while (!pq.empty() && pq.top().m <= c[i]) {
			spq.push(pq.top().v);
			pq.pop();
		}
		if (!spq.empty()) {
			sum += spq.top();
			spq.pop();
		}
	}
	cout << sum;
	return 0;
}