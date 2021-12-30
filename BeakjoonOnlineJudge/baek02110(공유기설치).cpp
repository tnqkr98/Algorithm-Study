#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int c;
int parametric(int p) {
	long cnt = 1, prv = v[0];
	for (int i = 1; i < v.size(); i++)
		if (v[i] - prv >= p) {
			cnt++;
			prv = v[i];
		}
	return cnt;
}

int main() {
	long n, left, right;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end());
	left = 1; right = v[n - 1];
	//binarySearch
	long mid, max = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		int p = parametric(mid);
		if (p > c) 			//������ c���� ����
			left = mid + 1;	//���� �÷��� ���� ����
		else if (p < c) 		//������ c���� ����
			right = mid - 1;	// ���� �ٿ��� ���� �ø�
		else {
			max = mid;
			left = mid + 1;
		}
	}
	if (max == 0) max = right;
	long res, p;
	for (res = max;; res++)
		if ((p = parametric(res)) < c) {
			res--;
			break;
		}
	cout << res;
	return 0;
}