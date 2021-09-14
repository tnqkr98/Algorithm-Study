#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
using namespace std;
vector<int> v;
int mmin = INT_MAX,l,r;
bool flag = 0;
int main() {
	int n, piv = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		v.push_back(t);
	}
	int left = 0, right = v.size() - 1,mid;
	while (left < right) {
		int sum = v[left] + v[right];
		if (abs(sum) < mmin){
			mmin = abs(sum);
			l = left; r = right;
		}
		if (sum > 0)
			right--;
		else if (sum < 0)
			left++;
		else {
			flag = 1;
			cout << v[left] << " " << v[right];
			break;
		}
	}
	if (!flag) cout << v[l] <<" "<<v[r];
	return 0;
}