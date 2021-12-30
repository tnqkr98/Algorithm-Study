#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
struct Edge {int w, s, e;};
struct cmp {
	bool operator()(Edge a, Edge b) {
		return a.w > b.w;
	}
};
int parent[10001];
int getParent(int a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
void Union(int a,int b) {
	a = getParent(a);
	b = getParent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	priority_queue<Edge, vector<Edge>, cmp> pq;
	int v, e,mst=0; cin >> v >> e;
	for (int i = 0; i < e; i++) {
		int w, s, e; cin >> s >> e >> w;
		pq.push({ w,s,e });
		parent[s] = s;
		parent[e] = e;
	}

	while (!pq.empty()) {
		int a, b,w;
		a = pq.top().s;
		b = pq.top().e;
		w = pq.top().w;
		if (getParent(a) != getParent(b)) {
			mst += w;
			Union(a, b);
		}
		pq.pop();
	}
	cout << mst;
	return 0;
}