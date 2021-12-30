#include <cstdio>
#include <vector>
#define DIV 1000000007
#pragma warning(disable:4996)
using namespace std;
vector<long long> v,segTree;
long long treeInit(int s,int e, int n) {
	if (s == e) return segTree[n] = v[s];
	int mid = (s + e) / 2;
	return segTree[n] = (treeInit(s, mid, n * 2) * treeInit(mid + 1, e, n * 2 + 1))%DIV;
}

long long mul(int s, int e, int n, int l, int r) {
	if (l > e || r < s) return 1;
	if (l <= s && e <= r) return segTree[n];
	int mid = (s + e) / 2;
	return (mul(s, mid, n * 2, l, r) * mul(mid + 1, e, n * 2 + 1, l, r))%DIV;
}

long long update(int s, int e,int n,int idx, long long val) {
	if (idx > e || idx < s) return segTree[n];	// 부모의 값을 만들기 위해 자신을 반환
	if (s == e) return segTree[n] = val;
	int mid = (s + e) / 2;
	return segTree[n] = (update(s, mid, n * 2, idx, val)*
		update(mid + 1, e, n * 2 + 1, idx, val))%DIV;
}
int main() {
	int n, m, k; scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		long long t; scanf("%lld", &t);
		v.push_back(t);
	}
	segTree = vector<long long>(n * 4);
	treeInit(0, n - 1, 1);
	for (int i = 0; i < m + k; i++) {
		long long a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
		if (a == 1) {
			update(0, n - 1, 1, b - 1,c);
		}
		else
			printf("%lld\n", mul(0, n - 1, 1, b - 1, c - 1));
		
	}
	return 0;
}