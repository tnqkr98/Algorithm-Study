#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
struct bs {int big, small;};
vector<int> v;
vector<bs> segTree;
bs treeInit(int s,int e, int n) {
	if (s == e) return segTree[n] = { v[s],v[s] };
	int mid = (s + e) / 2;
	bs val1 = treeInit(s, mid, n * 2);
	bs val2 = treeInit(mid + 1, e, n * 2 + 1);
	return segTree[n] = { max(val1.big, val2.big),min(val1.small, val2.small)};
}

bs find(int s, int e, int n, int l, int r) {
	if (l > e || r < s) return {0,1000000001};
	if (l <= s && e <= r) return segTree[n];
	int mid = (s + e) / 2;
	bs val1 = find(s, mid, n * 2, l, r);
	bs val2 = find(mid + 1, e, n * 2 + 1, l, r);
	return { max(val1.big, val2.big),min(val1.small, val2.small) };
}

int main() {
	int n, m; scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int t; scanf("%d", &t);
		v.push_back(t);
	}
	segTree = vector<bs>(n * 4);
	treeInit(0, n - 1, 1);
	for (int i = 0; i < m; i++) {
		int a, b; scanf("%d %d", &a, &b);
		bs res = find(0, n - 1, 1, a-1, b-1);
		printf("%d %d\n", res.small, res.big);
	}
	return 0;
}