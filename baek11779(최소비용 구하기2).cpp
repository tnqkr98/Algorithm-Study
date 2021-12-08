#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#pragma warning(disable:4996)
using namespace std;
struct ew{ int e, w; };
struct cmp {
	bool operator()(ew a, ew b) {
		return a.w > b.w;
	}
};
vector<ew> adj[1001];
int n, m,st,en,d[1001],before[1001]; 
bool visit[1001];
void djikstra() {
	priority_queue<ew,vector<ew>,cmp> pq;
	for (int i = 1; i <= n; i++) d[i] = 1e9;
	pq.push({st,0});
	d[st] = 0;
	while (!pq.empty()) {
		auto cur = pq.top(); pq.pop();
		visit[cur.e] = 1;
		for (auto near : adj[cur.e]) {
			if (!visit[near.e] && d[near.e] > d[cur.e] + near.w) {
				d[near.e] = d[cur.e] + near.w;
				before[near.e] = cur.e;
				pq.push({ near.e,d[near.e] });
			}
		}
	}
}
int main() {
	scanf("%d %d", &n,&m);
	for (int i = 0; i < m; i++) {
		int a, b, w;
		scanf("%d %d %d", &a, &b, &w);
		adj[a].push_back({ b,w });
	}
	scanf("%d %d", &st, &en);
	djikstra();
	printf("%d\n", d[en]);
	stack<int> v;
	for (int i=en; i != st; i = before[i]) v.push(i);
	v.push(st);
	printf("%d\n", v.size());
	while (!v.empty()) {
		printf("%d ", v.top());
		v.pop();
	}
	return 0;
}