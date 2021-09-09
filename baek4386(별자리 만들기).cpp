#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
struct edge {
	int s, e;
	double w;
};
struct cmp {
	bool operator()(edge a, edge b) { return a.w > b.w; }
};
vector<pair<double, double>> v;
priority_queue<edge, vector<edge>, cmp> pq;
int parent[101];
int getp(int a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
void Union(int a, int b) {
	a = getp(a);
	b = getp(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	int n; cin >> n;
	v.push_back({ 0,0 });
	for (int i = 0; i < n; i++) {
		double a, b;
		cin >> a >> b;
		v.push_back({ a,b });
		parent[i + 1] = i + 1;
	}

	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
			pq.push({ i,j,sqrt(pow(v[i].first - v[j].first,2) + pow(v[i].second - v[j].second,2)) });
	double mst = 0;
	while (!pq.empty()) {
		int s, e;
		s = pq.top().s;
		e = pq.top().e;
		double w = pq.top().w;
		if (getp(s) != getp(e)) {
			mst += w;
			Union(s, e);
		}
		pq.pop();
	}
	cout.precision(3);
	cout << mst;
	return 0;
}