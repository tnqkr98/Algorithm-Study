#include <cstdio>
#include <queue>
#pragma warning(disable:4996)
using namespace std;
struct edge { int s, e, w; };
struct cmp {
	bool operator()(edge a, edge b) {
		return a.w > b.w;
	}
};
int parent[100001],n,m;
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
int main() {
	priority_queue<edge, vector<edge>, cmp> pq;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)parent[i] = i;
	for (int i = 0; i < m; i++) {
		int s, e, w;
		scanf("%d %d %d", &s, &e, &w);
		pq.push({ s,e,w });
	}
	int mst = 0,max =0;
	while (!pq.empty()) {
		if (getp(pq.top().s) != getp(pq.top().e)) {
			Union(pq.top().s,pq.top().e);
			mst += pq.top().w;
			if (max < pq.top().w) max = pq.top().w;
		}
		pq.pop();
	}
	printf("%d", mst-max);
	return 0;
}