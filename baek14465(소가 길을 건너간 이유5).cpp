#include <iostream>
#include <algorithm>
using namespace std;
bool s[100001];
int main() {
	int n, k, b,cnt=0,lmin=100000; cin >> n >> k >> b;
	for (int i = 0; i < b; i++) {
		int t; cin >> t;
		s[t] = 1;
	}
	for (int i = 1; i <= k; i++)
		if (s[i]) cnt++;
	for (int i = k + 1; i <= n; i++) {
		if (s[i]) cnt++;
		if (s[i - k]) cnt--;
		lmin = min(lmin, cnt);
	}
	cout << lmin;
	return 0;
}