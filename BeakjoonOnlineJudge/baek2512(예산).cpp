#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int n;
int para(int limit) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] < limit) s += v[i];
		else {
			s += limit * (n - i);
			break;
		}
	}
	return s;
}
int main() {
	int s = 0, m; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int t; scanf("%d", &t);
		v.push_back(t);
		s += t;
	}
	scanf("%d", &m);
	sort(v.begin(), v.end());
	if (s <= m) {
		printf("%d", v[n - 1]);
		return 0;
	}
	int l = 0, r = v[n - 1], mid,res;
	while (l < r) {
		mid = (l + r) / 2;
		int sum = para(mid);
		if (sum > m) r = mid;
		else {
			res = mid;
			l = mid + 1;
		}
	}
	printf("%d", res);
	return 0;
}