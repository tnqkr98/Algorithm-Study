//#include <vector>
//#include <queue>
//#include <memory.h>
//#include <cstdio>
//#pragma warning(disable:4996)
//using namespace std;
//typedef struct {
//	int v,len;
//}Item;
//vector<vector<Item>> adj;
//bool check[100001] = { 0 };
//queue<Item> q;
//int v1,mmax = 0;
//void bfs() {
//	if (q.empty()) 
//		return;
//	Item item = q.front();
//	int len = item.len;
//	if (mmax < len) {
//		mmax = len;
//		v1 = item.v;
//	}
//	q.pop();
//	for (int i = 0; i < adj[item.v].size(); i++) {
//		int v = adj[item.v][i].v;
//		int w = adj[item.v][i].len;
//		if (!check[v]) {
//			q.push({v,len+w});
//			check[v] = 1;
//		}
//	}
//	bfs();
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);	
//	adj.push_back(vector<Item>());
//	for(int i=1;i<=n;i++)
//		adj.push_back(vector<Item>());
//	for (int i = 1; i < n; i++) {
//		int t, v, w;
//		scanf("%d %d %d", &t, &v, &w);
//		adj[t].push_back({ v,w });
//		adj[v].push_back({ t,w });
//	}
//
//	check[1] = 1;
//	q.push({ 1,0 });
//	bfs();
//	memset(check, 0, sizeof(check));
//
//	mmax = 0;
//	while (!q.empty())q.pop();
//	q.push({ v1,0 });
//	check[v1] = 1;
//	bfs();
//	
//	printf("%d", mmax);
//	return 0;
//}