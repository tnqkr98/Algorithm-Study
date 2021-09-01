#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		priority_queue<long> maxq;
		priority_queue<long, vector<long>, greater<long>> minq;
		unordered_map<long, int> m;
		int k; cin >> k;
		for (int j = 0; j < k; j++) {
			char c; long n;
			cin >> c >> n;
			if (c == 'I') {
				minq.push(n);
				maxq.push(n);
				m[n]++;
			}
			else if (n == 1) {
				while (!maxq.empty()) {
					if (m[maxq.top()] == 0)
						maxq.pop();
					else {
						m[maxq.top()]--;
						maxq.pop();
						break;
					}
				}
			}
			else if (n == -1) {
				while (!minq.empty()) {
					if (m[minq.top()] == 0)
						minq.pop();
					else {
						m[minq.top()]--;
						minq.pop();
						break;
					}
				}
			}
		}
		while (!maxq.empty() && !m[maxq.top()]) 
			maxq.pop();
		while (!minq.empty() && !m[minq.top()]) 
			minq.pop();
		
		if (maxq.empty() && minq.empty())
			cout << "EMPTY" << endl;
		else
			cout << maxq.top() << " " << minq.top() << endl;
	}
	return 0;
}