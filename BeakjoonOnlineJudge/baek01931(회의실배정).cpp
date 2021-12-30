#include <cstdio>
#include <algorithm>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
int len[100001] = { 0 };
int main() {
	int n, count = 1, ep = 0;
	scanf("%d", &n);
	vector<pair<int,int>>v;
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back(make_pair(b, a));
	}
	sort(v.begin(), v.end());
	ep = v[0].first;
	for (int i = 1; i < n; i++){
		if (v[i].second >= ep) {
			ep = v[i].first;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}