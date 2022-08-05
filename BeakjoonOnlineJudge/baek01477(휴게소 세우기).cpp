#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool rest[1001];
vector<int> rn;
int param(int mid) {
	int s = 0,c=0;
	for (int cur : rn) {
		while (s+mid < cur) {
			s += mid;
			c++;
		}
		s = cur;
	}
	return c;
}
int main() {
	int n, m, l;
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		rest[t] = 1;
		rn.push_back(t);
	}
	rn.push_back(l);
	sort(rn.begin(), rn.end());
	int left = 0, right = 1000,mid;
	while (left < right) {
		mid = (left + right) / 2;
		int val = param(mid);
		if (val > m)
			left = mid+1;
		else {
			right = mid;
			if (mid == 1) break;
		}
	}
	cout << right;
	return 0;
}