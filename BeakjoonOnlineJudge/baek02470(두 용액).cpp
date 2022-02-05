#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++){
		int t; cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	int s=0, e=v.size()-1,as=s,ae=e;
	long long min = abs(v[s]+v[e]),cur;
	while (s < e) {
		if (abs(v[s + 1] + v[e]) < abs(v[s] + v[e - 1])) 
			s++;
		else e--;
		if (s == e) break;
		cur = abs(v[s] + v[e]);
		if (cur >= min) continue;
		else {
			as = s;
			ae = e;
			min = cur;
		}
	}
	cout << v[as] << " " << v[ae];
	return 0;
}