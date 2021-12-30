#include <iostream>
#include <vector>
#include <climits>
#include <queue>
using namespace std;
typedef struct {int node, weight;} NW;
int n, m, r, d[101], items[101];
vector<NW> graph[101];
struct cmp{		// MinHeap
	bool operator()(NW a, NW b) {
		return a.weight > b.weight;
	}
};
void djikstra(int start) {
	priority_queue<NW, vector<NW>, cmp> pq;
	bool visit[101] = { 0 };
	for (int i = 0; i <= n; i++) d[i] = INT_MAX;
	d[start] = 0;
	pq.push({ start,d[start] });

	while (!pq.empty()) {
		int cur = pq.top().node;
		if (!visit[cur]) {
			visit[cur] = 1;
			for (NW near : graph[cur]) {
				if (!visit[near.node]) {
					if (d[near.node] > near.weight + d[cur]) {
						d[near.node] = near.weight + d[cur];
						pq.push({ near.node,d[near.node] });;
					}
				}
			}
		}
		pq.pop();
	}
}
int main() {
	int max = 0;
	cin >> n >> m >> r;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		items[i + 1] = t;
	}
	for (int i = 0; i < r; i++) {
		int s, e, w;
		cin >> s >> e >> w;
		graph[s].push_back({e,w});
		graph[e].push_back({s,w});
	}

	for (int i = 1; i <=n; i++) {
		int sum = 0;
		djikstra(i);
		for (int j = 1; j <= n; j++) {
			if (d[j] <= m)
				sum += items[j];
		}
		if (max < sum) max = sum;
	}
	cout << max;
	return 0;
}