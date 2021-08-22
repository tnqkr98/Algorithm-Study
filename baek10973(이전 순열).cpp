#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int main() {
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	if (prev_permutation(v.begin(), v.end())) {
		for (auto i : v) cout << i << " ";
		cout << endl;
	}
	else cout << -1;
	return 0;
}