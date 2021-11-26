#include <queue>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;
priority_queue<int, vector<int>, greater<int>> minq;
priority_queue<int> maxq;
int main() {
	int n; scanf("%d",&n);
	maxq.push(-10001);
	minq.push(10001);
	for(int i=0;i<n;i++) {
		int t; scanf("%d", &t);

		if (t >= maxq.top()) minq.push(t);
		else if (t < minq.top()) maxq.push(t);

		if (minq.size() == maxq.size() || maxq.size() == minq.size() + 1) printf("%d\n", maxq.top());
		else if (maxq.size()+2 == minq.size()) {
			maxq.push(minq.top());
			minq.pop();
			printf("%d\n" ,maxq.top());
		}
		else if (maxq.size() + 1 == minq.size()) printf("%d\n", minq.top());
		else if (maxq.size()== minq.size()+2) {
			minq.push(maxq.top());
			maxq.pop();
			printf("%d\n", maxq.top());
		}
	}
	return 0;
}