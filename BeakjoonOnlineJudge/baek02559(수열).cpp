#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	int max = -1e9,sum=0;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
		if (i < k) sum += t;
		else {
			sum += t;
			sum -= v[i - k];
		}
		if (i >= k-1 && sum > max) max = sum;
	}

	cout << max;

	return 0;
}