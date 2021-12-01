#include <iostream>
#include <vector>
using namespace std;
struct ew {int e, w;};
int dist[501],n;	// dist: 시작점으로부터 최단거리
vector<ew> v[501];
bool BellmanFord() {
	for (int i = 1; i <= n; i++) dist[i] = 1e9;
	dist[1] = 0;

	for(int i=1;i<=n;i++)	// 간선을 경유하는 횟수
		for(int j=1;j<=n;j++)	// 출발지 : j
			for (auto near : v[j]) {
				if (dist[j] == 1e9) 
					continue;
				else if (dist[near.e]>dist[j]+near.w) {	// j-?j의 near로 가는 거리가 갱신가능하면
					dist[near.e] = dist[j] + near.w;
					if (i == n)		// 만약 n개의 간선을 경유하는데 최단거리가 개선된다면 사이클이 존재하는것
						return false;	// 사이클존재
				}
			}
	return true;
}
int main() {
	int m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int s, e, w; cin >> s >> e >> w;
		v[s].push_back({ e,w });
	}
	if (BellmanFord()) {
		for (int i = 2; i <= n; i++) {
			if (dist[i] == 1e9) cout << "-1\n";
			else cout << dist[i] << "\n";
		}
	}
	else cout << -1;

	return 0;
}