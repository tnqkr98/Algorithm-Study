#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector<int> darr;
stack<int> s;
int arr[1000001], d[1000001];
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
	int maxidx = 0;
	darr.push_back(-1000000001);
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		int lis = find(arr[i]);
		d[i] = lis + 1;
		if (darr.size() - 1 < lis + 1) {
			darr.push_back(arr[i]);
			maxidx = i;
		}
		else
			darr[lis + 1] = min(darr[lis + 1], arr[i]);
	}
	cout << darr.size() - 1 << endl;
	int lis = d[maxidx];
	int val = arr[maxidx];
	s.push(val);
	for (int i = maxidx - 1; i >= 1; i--)
		if (d[i] == lis - 1 && arr[i] < val) {
			s.push(arr[i]);
			val = arr[i];
			lis = d[i];
		}
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}