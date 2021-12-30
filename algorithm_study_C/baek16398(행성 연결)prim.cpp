#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
struct nw { int n, w; };
vector<vector<nw>> adj(1001);
int n, d[1001];// d는 트리를 이루는 노드집합과 그 외 노드 집합과의 거리들.
bool visit[1001];
long long prim() {
	long long cost = 0;  
	for (int i = 0; i < n; i++) d[i] = 1e9;
	visit[0] = 1; // 시작 지점  0

	for (auto near : adj[0]) // 처음엔 집합에 시작지점밖에 없기에 그 주변 d배열 값 갱신
		d[near.n] = near.w;

	for (int i = 1; i < n; i++) {
		int new_cur = 0, minw = 1e9;
		for (int j = 1; j < n; j++) {	//집합의 주변 중 방문하지 않은 노드 중 최소 비용찾기
			if (!visit[j] && d[j] < minw) { //visit 배열때문에 집합 내부는 무시
				new_cur = j;
				minw = d[j];
			}
		}
	
		cost += minw;		// 비용 합산
		visit[new_cur] = 1;	// 집합에 추가된 new_cur
		for (auto near : adj[new_cur])	// 추가된 노드까지 포함해서 주변과의 최소비용 갱신
			d[near.n] = min(d[near.n], near.w);
	}

	return cost;
}
int main() {
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int w = 0; scanf("%d", &w);
			adj[i].push_back({j,w});
		}

	printf("%lld",prim());
	return 0;
}