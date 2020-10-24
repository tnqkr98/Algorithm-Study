#include <iostream>
#include <vector>
using namespace std;
int main() {
	long long n, m,max=0;
	vector<long long> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		long long t; cin >> t;
		v.push_back(t);
		if (t > max) max = t;
	}
	long long left, right,mid, ansmin = m*max;
	left = 1; right = m * max;
	while (left <=a right) {
		mid = (left + right) / 2;
		long long tot=0;
		for (int i = 0; i <n; i++)
			tot += mid / v[i];
		if (tot <m)
			left = mid + 1;
		else {
			right = mid - 1;
			if (ansmin > mid) ansmin = mid;
		}
	}
	cout << ansmin;
	return 0;
}