#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#pragma warning(disable:4996)
using namespace std;
vector<int> adj[100001],route;
set<int> isnear[100001];
bool visit[100001];
int cur = 0,n;
queue<int> q,rq;
bool bfs() {
	if (rq.empty()) return 1;	
	if (q.empty()) return 0;

	int node = q.front(); q.pop();
	int rnode = rq.front(); rq.pop();
	if (node != rnode) return 0;

	int pos = cur;
	int ncount = 0;
	for (int i = pos; i < n; i++) {
		if (isnear[node].count(route[i]) > 0) {
			visit[route[i]] = 1;
			q.push(route[i]);
			cur++;
		}
		ncount++;
		if (ncount == isnear[node].size() || i + 1 == n) break;
	}
	return bfs();
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		int s, e; scanf("%d %d", &s,&e);
		isnear[s].insert(e);
		isnear[e].insert(s);
	}
	for (int i = 0; i < n; i++) {
		int a; scanf("%d", &a);
		route.push_back(a);
		rq.push(a);
	}
	q.push(1);
	visit[1] = 1;
	cur++;
	if (bfs()) printf("1");
	else printf("0");
	return 0;
}