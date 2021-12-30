#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> darr;
int find(int num) {
	int l = 0, r = darr.size() - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (darr[mid] > num) r = mid - 1;
		else if (darr[mid] == num) return mid - 1;
		else l = mid + 1;
	}
	return l - 1;
}
int main() {
	int n; cin >> n;
	darr.push_back(-1000000001);
	for (int i = 1; i <= n; i++) {
		int t; cin >> t;
		int lis = find(t);
		if (darr.size() - 1 < lis + 1)
			darr.push_back(t);
		else
			darr[lis + 1] = min(darr[lis + 1], t);
	}
	cout << darr.size() - 1;
	return 0;
}