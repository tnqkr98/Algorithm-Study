#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int main() {
	int n, m, sum = 0; scanf("%d %d", &n, &m);
	vector<int> v,sv;
	for (int i = 0; i < n; i++){
		int t; scanf("%d", &t);
		v.push_back(t);
		sum += t;
		sv.push_back(sum);
	}
	for (int i = 0; i < m; i++) {
		int s, e;  scanf("%d %d", &s, &e);
		if(s > 1) printf("%d\n",sv[e-1] - sv[s-2]);
		else printf("%d\n", sv[e - 1]);
	}
	return 0;
}