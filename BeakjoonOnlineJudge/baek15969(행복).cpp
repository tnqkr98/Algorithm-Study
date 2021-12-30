#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	cout << *(v.end()-1) - v[0];
	return 0;
}