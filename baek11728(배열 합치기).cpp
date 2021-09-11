#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
vector<int> v1, v2;
int main() {
	int n, m,nc=0,mc=0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		int t; scanf("%d",&t);
		v1.push_back(t);
	}
	for (int i = 0; i < m; i++) {
		int t; scanf("%d", &t);
		v2.push_back(t);
	}
	for (int i = 0; i < m + n; i++) {
		if (nc == n) {
			printf("%d ", v2[mc++]);
			continue;
		}
		if (mc == m) {
			printf("%d ", v1[nc++]);
			continue;
		}
		if (v1[nc] < v2[mc]) printf("%d ", v1[nc++]);
		else printf("%d ", v2[mc++]);
	}

	return 0;
}