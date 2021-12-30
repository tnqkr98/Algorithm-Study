#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <memory.h>
#define INF INT_MAX
#define MIN(a,b) (((a)>(b))?(b):(a))
using namespace std;

struct NW {
	int node, wgt;
};

struct cmp {
	bool operator()(NW a, NW b) {
		if (a.wgt > b.wgt)		// 가중치 오름차순
			return true;
		else if (a.wgt == b.wgt)
			return a.node > b.node;	//노드번호 오름차순
		return false;
	}
};
int dist[801],n;				// 각 노드의 출발지로 부터 최단거리
vector<NW> graph[801];		// 인접리스트 기반 그래프
bool visit[801] = { 0 };			// 방문배열

int dijkstra(int start, int end) {
	priority_queue<NW, vector<NW>, cmp> pq;	//최소힙
	memset(visit, 0, sizeof(visit));
	for (int i = 0; i < n; i++)
		dist[i + 1] = INF;

	dist[start] = 0;
	pq.push({ start,0 });
	while (!pq.empty()) {
		NW pick = pq.top();
		pq.pop();
		if (visit[pick.node]) continue;
		visit[pick.node] = 1;

		for (NW near : graph[pick.node])
			if (!visit[near.node]) {
				int before = dist[near.node];
				dist[near.node] = MIN(dist[near.node], dist[pick.node] + near.wgt);
				if (dist[near.node] != before)
					pq.push({ near.node,dist[near.node] });
			}
	}
	return dist[end];
}

int main() {
	int  m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int s, e, w;
		cin >> s >> e >> w;
		graph[s].push_back({ e,w });
		graph[e].push_back({ s,w });
	}

	int n1, n2;
	long d1=0, d2=0,res;
	cin >> n1 >> n2;
	d1 += dijkstra(1, n1);
	d1 += dijkstra(n1, n2);
	d1 += dijkstra(n2, n);

	d2 += dijkstra(1, n2);
	d2 += dijkstra(n2, n1);
	d2 += dijkstra(n1, n);

	res = MIN(d1, d2);
	if (res >= INF) cout << -1;
	else cout << res;

	return 0;
}