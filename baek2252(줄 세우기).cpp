#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int in[32001],n,m;
vector<int> graph[32001],res;
void topology() {
	// 진입차수 0인것 찾기
	int root;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		if (in[i] == 0) {
			q.push(i);
			res.push_back(i);
		}
	while (!q.empty()) {
		int num = q.front();
		q.pop();
		for (auto near : graph[num]) {
			in[near]--;
			if (in[near] == 0) {
				q.push(near);
				res.push_back(near);
			}
		}
	}
	for (int i = 0; i < n; i++) 	// res가 n개보다 작으면 사이클 발생한것.
		cout << res[i] << " ";
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		graph[a].push_back(b);
		in[b]++;
	}
	topology();
	return 0;
}