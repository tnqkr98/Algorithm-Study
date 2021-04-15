#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;
	vector<int> tar;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		tar.push_back(t);
	}
	
	if (next_permutation(tar.begin(), tar.end())) 
		for (auto it = tar.begin(); it != tar.end(); it++) 
			cout << *it << " ";
	else
		cout << -1;
	return 0;
}