#include <cstdio>
#include <queue>
using namespace std;
int parent[200001];
struct edge {int s, e, d;};
struct cmp {
	bool operator()(edge a, edge b) {
		return a.d > b.d;
	}
};
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
	priority_queue<edge, vector<edge>, cmp> pq;
	int m, n;
	do {
		int base = 0, mst = 0;
		scanf("%d %d", &m, &n);
		for (int i = 0; i < m; i++)parent[i] = i;
		for (int i=0; i < n; i++) {
			int s, e, d;
			scanf("%d %d %d", &s, &e, &d);
			base += d;
			pq.push({ s,e,d });
		}
		while (!pq.empty()) {
			int s, e, d;
			s = pq.top().s;
			e = pq.top().e;
			d = pq.top().d;
			if (getp(s) != getp(e)) {
				mst += d;
				Union(s, e);
			}
			pq.pop();
		}
		if(base!=0)
			printf("%d\n", base - mst);
	} while (m != 0 && n != 0);

	return 0;
}
