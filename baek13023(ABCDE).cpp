//#include <iostream>
//#include <vector>
//#include <memory.h>
//using namespace std;
//int n, m;
//bool visit[2001],ffind=0;
//vector<vector<int>> v;
//void dfs(int node,int d) {
//	if (d == 4) ffind = 1;
//	for (auto next : v[node]) {
//		if (ffind) return;
//		if (!visit[next]) {
//			visit[next] = 1;
//			dfs(next, d + 1);
//			visit[next] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n >> m;
//	vector<vector<int>> t(n);
//	for (int i = 0; i < m; i++) {
//		int s, e;
//		cin >> s >> e;
//		t[s].push_back(e);
//		t[e].push_back(s);
//	}
//	v = t;
//	for (int i = 0; i < n; i++) {
//		visit[i] = 1;
//		dfs(i, 0);
//		memset(visit, 0, sizeof(visit));
//		if (ffind) break;
//	}
//	if (ffind) cout << 1;
//	else cout << 0;
//	return 0;
//}