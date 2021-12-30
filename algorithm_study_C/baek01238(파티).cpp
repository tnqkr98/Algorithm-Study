#include <cstdio>
#include <queue>
#include <vector>
#include <climits>
#include <memory.h>
#pragma warning(disable:4996)
using namespace std;
struct NW { int node, wgt; };
struct cmp {
	bool operator()(NW a, NW b) {
		return a.wgt > b.wgt;
	}
};
int n, m, x, d[1001], xton[1001], findMin[1001] = { 0 };
vector<NW> graph[1001];
int dijkstra(int start, int end) {
	priority_queue<NW, vector<NW>, cmp> pq;
	bool visit[1001] = { 0 };
	for (int i = 0; i <= n; i++) d[i] = INT_MAX;
	d[start] = 0;
	pq.push({ start,0 });
	while (!pq.empty()) {
		int cur = pq.top().node;
		visit[cur] = 1;
		if (findMin[cur] != 0 && end != 0)
			if (d[end] > d[cur] + findMin[cur])
				d[end] = d[cur] + findMin[cur];
		pq.pop();
		for (auto near : graph[cur]) {
			if (d[near.node] > near.wgt + d[cur]) {
				d[near.node] = near.wgt + d[cur];
				pq.push({ near.node,d[near.node] });
			}
		}
	}
	if (end != 0) findMin[start] = d[end];
	return d[end];
}
int main() {
	scanf("%d %d %d", &n, &m, &x);
	for (int i = 0; i < m; i++) {
		int s, e, t;
		scanf("%d %d %d", &s, &e, &t);
		graph[s].push_back({ e,t });
	}
	int max = 0;
	dijkstra(x, 0);
	memcpy(xton, d, sizeof(d));
	for (int i = 1; i <= n; i++) {
		if (i == x) continue;
		int t = dijkstra(i, x) + xton[i];
		if (t > max) max = t;
	}
	printf("%d", max);
	return 0;
}