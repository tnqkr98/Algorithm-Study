#include <iostream>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		pq.push(t);
	}
	int sum = 0;
	while (pq.size() > 1) {
		int a, b;
		a = pq.top(); pq.pop();
		b = pq.top(); pq.pop();
		sum += a + b;
		pq.push(a + b);
	}
	cout << sum;
	return 0;
}