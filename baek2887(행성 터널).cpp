#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;
struct node { int num, x, y, z; };
struct edge { int s, e, w; };
struct cmp {
	bool operator()(edge a, edge b) {return a.w > b.w;}
};
bool cmpx(node a, node b) { return a.x < b.x;}
bool cmpy(node a, node b) { return a.y < b.y; }
bool cmpz(node a, node b) { return a.z < b.z; }
int parent[100001];
int getParent(int n) {
	for (; n != parent[n]; n = parent[n]);
	return n;
}
void Union(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int min(int a, int b, int c) {
	if (a <= b && a <= c) return a;
	if (b <= a && b <= c) return b;
	if (c <= b && c <= a) return c;
}
priority_queue<edge, vector<edge>, cmp> pq;
vector<node> v;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		v.push_back({ i,x,y,z });
		parent[i] = i;
	}

	sort(v.begin(), v.end(),cmpx);	// x 우선순위
	for (int i = 0; i < n - 1; i++)	
		pq.push({ v[i + 1].num,v[i].num,abs(v[i + 1].x - v[i].x) });
	sort(v.begin(), v.end(), cmpy);	// y 우선순위
	for (int i = 0; i < n - 1; i++)
		pq.push({ v[i + 1].num,v[i].num,abs(v[i + 1].y - v[i].y) });
	sort(v.begin(), v.end(), cmpz);	// z 우선순위
	for (int i = 0; i < n - 1; i++)
		pq.push({ v[i + 1].num,v[i].num,abs(v[i + 1].z - v[i].z) });


	long long mst = 0;
	while (!pq.empty()) {
		auto cur = pq.top();
		pq.pop();
		if (getParent(cur.s) != getParent(cur.e)) {
			Union(cur.s, cur.e);
			mst += cur.w;
		}
	}
	cout << mst;
	return 0;
}