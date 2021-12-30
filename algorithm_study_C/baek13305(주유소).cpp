#include <iostream>
#include <vector>
using namespace std;
int n;
vector<long long> c, l;
int findNext(int cur) {
	for (int i = cur; i < n; i++) 
		if (c[cur] > c[i])
			return i;
	return n-1;
}
long long findLen(int from, int to) {
	long long sum = 0;
	for (int i = from; i < to; i++) sum += l[i];
	return sum;
}
int main() {
	long long cost = 0;
	cin >> n;
	c = vector<long long>(n); l = vector<long long>(n - 1);
	for (int i = 0; i < n-1; i++) cin >> l[i];
	for (int i = 0; i < n; i++) cin >> c[i];
	for (int i = 0; i < n;) {
		int next = findNext(i);
		cost += c[i] * findLen(i, next);
		i = next;
		if (i == n - 1) break;
	}
	cout << cost;
	return 0;
}