#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	vector<int> v,s;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++)
		s.push_back(v[i + 1] - v[i]);
	sort(s.begin(), s.end());
	long long sum = 0;
	if (s.size() >= k-1) {
		for (int i = 0; i < s.size()-k+1; i++)
			sum += s[i];
	}
	else sum = 0;

	cout << sum;
	return 0;
}