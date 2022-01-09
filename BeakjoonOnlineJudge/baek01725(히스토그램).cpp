#include <cstdio>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
struct node {
	int idx;
	long long val;
};
vector<long long> v;
vector<node> segTree;
long long mmax = 0;
node initSegTree(int s, int e, int n) {
	if (s == e) return segTree[n] = { s,v[s] };
	int mid = (s + e) / 2;
	node l = initSegTree(s, mid, n * 2);
	node r = initSegTree(mid + 1, e, n * 2 + 1);
	if (l.val < r.val) return segTree[n] = l;
	else return segTree[n] = r;
}
node findMin(int s, int e, int n, int l, int r) {
	if (l > e || r < s) return { 0,1000000001 };
	if (l <= s && e <= r) return segTree[n];
	int mid = (s + e) / 2;
	node left = findMin(s, mid, n * 2, l, r);
	node right = findMin(mid + 1, e, n * 2 + 1, l, r);
	if (left.val < right.val) return left;
	else return right;
}
long long maxsq(int s, int e) {
	if (s == e) return v[s];
	node mhnode = findMin(0, v.size() - 1, 1, s, e);
	long long sq = (long long)mhnode.val * (e - s + 1);
	if (mhnode.idx == s) return max(sq, maxsq(s + 1, e));
	else if (mhnode.idx == e) return max(sq, maxsq(s, e - 1));
	else return max(sq, max(maxsq(s, mhnode.idx - 1), maxsq(mhnode.idx + 1, e)));
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		long long h; scanf("%lld", &h);
		v.push_back(h);
	}
	segTree = vector<node>(n * 4);
	initSegTree(0, n - 1, 1);
	printf("%lld\n", maxsq(0, n - 1));

	return 0;
}