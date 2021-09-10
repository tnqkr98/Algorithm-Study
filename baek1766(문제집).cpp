#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> graph[32001],res;
int in[32001],n,m;
void topology() {
	for (int i = 1; i <= n; i++)
		if (in[i] == 0) pq.push(i);
	while (!pq.empty()) {
		int num = pq.top();
		res.push_back(num);
		pq.pop();
		for (auto near : graph[num]) {
			in[near]--;
			if (in[near] == 0) {
				pq.push(near);
			}
		}
	}
	for (auto i : res)cout << i << " ";
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		in[b]++;
	}
	topology();
	return 0;
}