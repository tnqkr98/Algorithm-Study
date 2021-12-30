#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int L;
vector<int> v;
int parametric(int dist) {	// dist: 휴게소간 최대 거리
	int cnt = 0; // 세운 휴게소 개수
	int prv = 0, vcur = 0;
	while (prv + dist < L) {
		if (vcur >= v.size()) {
			prv += dist;
			cnt++;
		}
		else if (prv + dist < v[vcur]) {
			prv += dist;
			cnt++;
		}
		else {
			prv = v[vcur];
			vcur++;
		}
	}
	return cnt;
}
int main() {
	int n,m; cin >> n >> m>> L;
	v = vector<int>(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int left = 0, right = L, res = INT_MAX;
	while (left <= right) {
		int mid = (left + right) / 2;
		int cnt = parametric(mid);
		if (cnt <= m) {
			res = min(mid, res);
			right = mid - 1;
		}
		else 
			left = mid + 1;
	}
	cout << res;
	return 0;
}