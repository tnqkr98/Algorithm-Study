#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#define INF INT_MAX
#define MIN(a,b) (((a)>(b))?(b):(a))
using namespace std;

struct NW {
	int node, wgt;
};

struct cmp{
	bool operator()(NW a, NW b) {
		if (a.wgt > b.wgt)		// 가중치 오름차순
			return true;
		else if (a.wgt == b.wgt) 
			return a.node > b.node;	//노드번호 오름차순
		return false;
	}
};
int dist[1001];				// 각 노드의 출발지로 부터 최단거리
vector<NW> graph[1001];		// 인접리스트 기반 그래프
bool visit[1001];			// 방문배열

int dijkstra(int start,int end) {
	priority_queue<NW, vector<NW>, cmp> pq;	//최소힙
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
	int n, m,i;
	cin >> n >> m;

	for (i = 0; i < m; i++) {
		int s, e, w;
		cin >> s >> e >> w;
		graph[s].push_back({ e,w });
	}

	for (i = 0; i < n; i++) {
		dist[i + 1] = INF;
		visit[i + 1] = 0;
	}

	int start, end;
	cin >> start >> end;

	cout<<dijkstra(start, end);
	
	return 0;
}