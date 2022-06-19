#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[20];
	vector<int> v;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i <= pow(2, n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) sum += arr[j];
		}
		v.push_back(sum);
	}
	sort(v.begin(), v.end());
	int res = v[v.size() - 1]+1;
	for (int i = 1; i < v.size(); i++) 
		if (v[i] - v[i - 1] > 1) {
			res = v[i - 1] + 1;
			break;
		}
	cout << res;
	return 0;
}