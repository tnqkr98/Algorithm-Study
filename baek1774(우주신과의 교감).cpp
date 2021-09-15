#include <cstdio>
#include <queue>
#include <cmath>
#pragma warning(disable:4996)
using namespace std;
struct edge { 
	int s, e;
	double w; 
};
struct cmp {
	bool operator()(edge a, edge b) {
		return a.w > b.w;
	}
};
priority_queue<edge, vector<edge>, cmp> pq;
int parent[1001];
int getParent(int a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
void Union(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
double calWeight(pair<int, int> a, pair<int, int> b) {
	return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}
int main() {
	int n, m; scanf("%d %d", &n, &m);
	double mst = 0;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; scanf("%d %d", &x, &y);
		v.push_back({ x,y });
		parent[i + 1] = i + 1;
	}
	for (int i = 0; i < n-1; i++) 
		for (int j = i + 1; j < n; j++) 
			pq.push({ i+1,j+1,calWeight(v[i],v[j]) });
	for (int i = 0; i < m; i++) {
		int s, e; scanf("%d %d", &s, &e);
		if (getParent(s) != getParent(e)) 
			Union(s, e);
	}
	while (!pq.empty()) {
		int s, e;
		double w;
		s = pq.top().s;
		e = pq.top().e;
		w = pq.top().w;
		pq.pop();
		if (getParent(s) != getParent(e)) {
			mst += w;
			Union(s, e);
		}
	}
	printf("%.2f", mst);
	return 0;
}