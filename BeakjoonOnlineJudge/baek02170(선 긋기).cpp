#include <cstdio>
#include <vector>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
struct se {
	long long s, e;
};
bool cmp(se a, se b) {
	return a.s < b.s;
}
vector<se> v;
int main() {
	int n; scanf("%d", &n);
	long long len = 0,bige;
	for (int i = 0; i<n; i++) {
		long long s, e; scanf("%lld %lld", &s, &e);
		v.push_back({ s,e });
	}
	sort(v.begin(), v.end(), cmp);
	len = v[0].e - v[0].s;
	bige = v[0].e;
	for (int i = 1; i < n; i++) {
		if (v[i].s < bige) {
			if (v[i].e > bige) {
				len += v[i].e - bige;
				bige = v[i].e;
			}
		}
		else {
			len += v[i].e - v[i].s;
			bige = v[i].e;
		}
	}
	printf("%lld", len);
	return 0;
}