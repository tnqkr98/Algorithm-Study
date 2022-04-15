#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> v,s;
	int n,c=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
		s.push_back(t);
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < n; i++) {
		if (v[i] != s[i]) c++;
	}
	cout << c;
	return 0;
}