#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef struct { int e, w; } ew;
typedef struct {
	bool operator()(ew a, ew b) {
		return a.w > b.w;
	}
} cmp;
vector<ew> adj[101];
priority_queue<ew, vector<ew>, cmp> pq;
int parent[101];
int getp(int a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
void Union(int a, int b) {
	a = getp(a);
	b = getp(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int solution(int n, vector<vector<int>> costs) {
	int mst = 0;
	for (int i = 0; i < n; i++) parent[i] = i;
	for (int i = 0; i < costs.size(); i++) {
		adj[costs[i][0]].push_back({ costs[i][1],costs[i][2] });
		adj[costs[i][1]].push_back({ costs[i][0],costs[i][2] });
	}
	for (auto i : adj[0]) pq.push(i);
	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();
		if (getp(0) == getp(cur.e)) continue;
		else {
			Union(0, cur.e);
			mst += cur.w;
		}
		for (auto near : adj[cur.e]) pq.push(near);
	}
	return mst;
}