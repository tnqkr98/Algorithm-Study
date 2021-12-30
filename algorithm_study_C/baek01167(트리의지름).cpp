//#include <vector>
//#include <queue>
//#include <memory.h>
//#include <cstdio>
//#pragma warning(disable:4996)
//using namespace std;
//typedef struct {
//	int v;
//	long long len;
//}Item;
//vector<vector<Item>> adj;
//bool check[100001] = { 0 };
//queue<Item> q;
//int v1;
//long long mmax = 0;
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
//		long long w = adj[item.v][i].len;
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
//	for (int i = 1; i <= n; i++) {
//		int t, v;
//		long long w;
//		scanf("%d %d %lld", &t, &v, &w);
//		while (1) {
//			adj[t].push_back({ v,w });
//			scanf("%d", &v);
//			if (v == -1) 
//				break;
//			scanf("%lld", &w);
//		}
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
//	printf("%lld", mmax);
//	return 0;
//}