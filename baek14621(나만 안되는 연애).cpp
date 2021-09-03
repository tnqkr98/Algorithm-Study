#include <iostream>
#include <queue>
using namespace std;
struct edge {int u, v, d;};
struct cmp {
	bool operator()(edge a, edge b) {
		return a.d > b.d;
	}
};
char mw[1001];
int parent[1001], cnt[1001];
int getParent(int a) {
	for (; a != parent[a]; a = parent[a]);
	return parent[a];
}
void Union(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	int size = cnt[a] + cnt[b];
	if (a < b) {
		parent[b] = a;
		cnt[a] = size;
	}
	else {
		parent[a] = b;
		cnt[b] = size;
	}
}
int main() {
	int n, m;
	priority_queue<edge, vector<edge>, cmp>pq;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> mw[i];
		parent[i] = i;
		cnt[i] = 1;
	}
	while (m--) {
		int u, v, d;
		cin >> u >> v >> d;
		pq.push({ u,v,d });
	}

	int sum = 0;
	while (!pq.empty()) {
		int u, v, d;
		u = pq.top().u;
		v = pq.top().v;
		if (mw[u] != mw[v] && getParent(u) != getParent(v)){
			sum += pq.top().d;
			Union(u, v);
		}
		pq.pop();
	}
	if (cnt[getParent(1)] == n)
		cout << sum;
	else
		cout << -1;
	return 0;
}