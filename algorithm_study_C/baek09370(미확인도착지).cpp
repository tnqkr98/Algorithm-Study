//#include <iostream>
//#include <queue>
//#include <vector>
//#include <climits>
//#include <memory.h>
//#include <algorithm>
//#define INF INT_MAX
//#define MIN(a,b) (((a)>(b))?(b):(a))
//#define SIZE 2001
//using namespace std;
//
//struct NW { int node, wgt; };
//struct cmp {
//	bool operator()(NW a, NW b) {
//		if (a.wgt > b.wgt)		// 가중치 오름차순
//			return true;
//		else if (a.wgt == b.wgt)
//			return a.node > b.node;	//노드번호 오름차순
//		return false;
//	}
//};
//int dist[SIZE];				// 각 노드의 출발지로 부터 최단거리
//vector<NW> graph[SIZE];		// 인접리스트 기반 그래프
//bool visit[SIZE] = { 0 };			// 방문배열
//
//int dijkstra(int start, int end,int size) {
//	priority_queue<NW, vector<NW>, cmp> pq;	//최소힙
//	memset(visit, 0, sizeof(visit));
//	for (int i = 0; i < size; i++)
//		dist[i + 1] = INF;
//
//	dist[start] = 0;
//	pq.push({ start,0 });
//	while (!pq.empty()) {
//		NW pick = pq.top();
//		pq.pop();
//		if (visit[pick.node]) continue;
//		visit[pick.node] = 1;
//
//		for (NW near : graph[pick.node])
//			if (!visit[near.node]) {
//				int before = dist[near.node];
//				dist[near.node] = MIN(dist[near.node], dist[pick.node] + near.wgt);
//				if (dist[near.node] != before)
//					pq.push({ near.node,dist[near.node] });
//			}
//	}
//	return dist[end];
//}
//
//int main() {
//	int T; cin >> T;
//	while (T--) {
//		int n, m, t,s,g,h;
//		vector<int> v;
//		cin >> n >> m >> t;
//		cin >> s >> g >> h;
//		int len;
//		for (int i = 0; i < m; i++) {
//			int a, b, d;
//			cin >> a >> b >> d;
//			if ((a == g && b == h)|| (b == g && a == h))
//				len = d;
//			graph[a].push_back({ b,d });
//			graph[b].push_back({ a,d });
//		}
//		for (int i = 0; i < t; i++) {
//			int end; cin >> end;
//			long long shortcut = dijkstra(s, end,n);
//			if (shortcut > INF) continue;
//			long long res;
//			res = dijkstra(s, g, n);
//			res += len;
//			res += dijkstra(h, end, n);
//			if (res == shortcut)
//				v.push_back(end);
//			else {
//				res = dijkstra(s, h, n);
//				res += len;
//				res += dijkstra(g, end, n);
//				if (res == shortcut)
//					v.push_back(end);
//			}
//		}
//		sort(v.begin(), v.end());
//		for (int i = 0; i < v.size(); i++)
//			cout << v[i] << " ";
//		cout << endl;
//		for (int i = 0; i < n+1; i++)
//			graph[i].clear();
//	}
//	return 0;
//}