#include <iostream>
#include <queue>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int n, dist[10001];
bool visit[10001];
vector<pair<int, int>> graph[10001];
void dijkstra(int start) {
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });
	fill(dist, dist + n + 1, INT_MAX);
	fill(visit, visit + n + 1, 0);
	dist[start] = 0;
	while (!pq.empty()) {
		int cur = pq.top().second;
		pq.pop();
		if (!visit[cur]) {
			visit[cur] = 1;
			for (auto near : graph[cur]) {
				if (dist[near.first] > dist[cur] + near.second) {
					dist[near.first] = dist[cur] + near.second;
					pq.push({ -dist[near.first],near.first });
				}
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int d, c;
		cin >> n >> d >> c;
		for (int j = 0; j < d; j++) {
			int a, b, s;
			cin >> a >> b >> s;
			graph[b].push_back({ a,s });
		}
		dijkstra(c);
		int cnt=0, time=0;
		for (int j = 1; j <=n; j++) {
			graph[j].clear();
			if (visit[j]) {
				cnt++;
				if (dist[j] > time) time = dist[j];
			}
		}
		cout << cnt << " " << time<<endl;
	}
	return 0;
}