#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <limits.h>
#define inf uint_max
#define min(a,b) (((a)>(b))?(b):(a))
#pragma warning(disable:4996)
using namespace std;
unsigned int d[20001];
typedef struct {
	unsigned int v, d;
} q;
struct cmp {					// 최소힙
	bool operator()(q a,q b) {
		return a.d > b.d;
	}
};
int main() {
	unsigned int v, e,s,node,dist,tmp, v1,v2,w,i;
	set<int> visit;							// 방문집합	
	vector<vector<q>> adj;					// 인접리스트 (인접행렬로 구현시, 시간복잡도 상승)
	priority_queue<q,vector<q>,cmp> q;		// 미방문집합
	scanf("%d %d", &v, &e);
	scanf("%d", &s);
	for (i = 0; i <= v; i++) {
		vector<q> dummy;
		adj.push_back(dummy);
	}
	for (i = 0; i < e; i++) {
		scanf("%d %d %d", &v1, &v2, &w);
		adj[v1].push_back({ v2,w });
	}
	
	for (i = 1; i <= v; i++)		// 최단 거리 배열 초기화
		d[i] = inf;
	d[s] = 0;

	for (i = 1; i <= v; i++)		// 미방문 집합 초기화
		q.push({i,d[i]});

	while (1) {
		if (visit.size() == v)
			break;
		node = q.top().v;
		dist = q.top().d;
		if (dist == inf)
			break;
		q.pop();
		for (i = 0; i < adj[node].size(); i++) {
			if (visit.find(adj[node][i].v) == visit.end()) {
				tmp = d[adj[node][i].v];
				d[adj[node][i].v] = min(d[adj[node][i].v], d[node] + adj[node][i].d);
				if (tmp > d[adj[node][i].v])
					q.push({ adj[node][i].v ,d[adj[node][i].v] });
			}
		}
		visit.insert(node);
	}

	for (i = 1; i <= v; i++) 
		if (d[i] != inf)
			printf("%d\n", d[i]);
		else
			printf("inf\n");
	return 0;
}