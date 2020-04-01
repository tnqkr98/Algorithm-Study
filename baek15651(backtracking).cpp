// https://www.acmicpc.net/problem/15651

#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int n, m;
void pr(int l,vector<int> v) {
	int conti = 0, i, j;
	if (l == m) {
		for (i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n");
		return;
	}
	for (i = 1; i <= n; i++) {
		vector<int> v1(v);
		v1.push_back(i);
		pr(l + 1,v1);
	}
}
int main() {
	vector<int> v;
	scanf("%d %d", &n, &m);
	pr(0, v);
	return 0;
}