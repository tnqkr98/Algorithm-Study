#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
vector<long long int> v,segTree;
long long int treeInit(int s,int e, int n) {
	if (s == e) return segTree[n] = v[s];
	int mid = (s + e) / 2;
	return segTree[n] = treeInit(s, mid, n * 2) + treeInit(mid + 1, e, n * 2 + 1);
}

// 합을 구하고자 하는 인덱스 범위 l~r (고정)
// 검사를 하는 인덱스 범위 s~e
// 합구하는 인덱스 범위 밖에면, 0
// 검사하는 범위(s~e)가 합구하려는 인덱스 범위(l~r)안에 
// 완전히 포함되면 합 포함(현재 합노드 값, 다른노드랑 범위 안겹침)
long long int sum(int s, int e, int n, int l, int r) {
	if (l > e || r < s) return 0;	// 범위밖
	if (l <= s && e <= r) return segTree[n]; // 범위안

	// 위에서 안걸러지면, 두 부분으로 나누어 합 구함
	int mid = (s + e) / 2;
	return sum(s, mid, n * 2, l, r) + sum(mid + 1, e, n * 2 + 1, l, r);
}

// 값이 변경되는 인덱스가 탐색 범위에 포함되어있다면 업데이트
void update(int s, int e,int n,int idx, long long int dif) {
	if (idx > e || idx < s) return;
	segTree[n] += dif;	// 범위안이면 '차이'값을 이용해 갱신
	if (s == e) return;
	int mid = (s + e) / 2;
	update(s, mid, n * 2, idx, dif);
	update(mid + 1, e, n * 2 + 1, idx, dif);
}
int main() {
	int n, m, k; scanf("%d %d %d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		long long int t; scanf("%lld", &t);
		v.push_back(t);
	}
	segTree = vector<long long int>(n * 4);
	treeInit(0, n - 1, 1);
	for (int i = 0; i < m + k; i++) {
		long long int a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
		if (a == 1) {
			long long dif = c - v[b - 1];
			v[b - 1] = c;
			update(0, n - 1, 1, b - 1,dif);
		}
		else
			printf("%lld\n", sum(0, n - 1, 1, b - 1, c - 1));
		
	}
	return 0;
}