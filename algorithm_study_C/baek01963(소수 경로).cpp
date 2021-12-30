#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
#include <climits>
using namespace std;
vector<int> prime,graph[10000];
queue<pair<int,int>> q;
bool visit[10000];
int mov = INT_MAX;
bool isNear(int a, int b) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		if (a % 10 != b % 10) cnt++;
		a /= 10;
		b /= 10;
	}
	if (cnt == 1) return 1;
	else return 0;
}
void bfs(int dest) {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	for (auto near : graph[cur.first]) 
		if (!visit[near]) {
			visit[near] = 1;
			if (near == dest) 
				mov = min(cur.second + 1,mov);
			q.push({ near,cur.second + 1 });
		}
	bfs(dest);
}
int main() {
	int t; cin >> t;
	for (int i = 1000; i < 10000; i++) {
		bool f = 1;
		for (int j = 2; j*j <= i; j++) 
			if (i%j == 0) {
				f = 0;
				break;
			}
		if (f) prime.push_back(i);
	}
	for (int i = 0; i < prime.size()-1; i++) 
		for (int j = i+1; j < prime.size(); j++) 
			if (isNear(prime[i], prime[j])) {
				graph[prime[i]].push_back(prime[j]);
				graph[prime[j]].push_back(prime[i]);
			}
	while (t--) {
		int a, b; cin >> a >> b;
		if (a == b) {
			cout << 0 << endl;
			continue;
		}
		memset(visit, 0, sizeof(visit));
		mov = INT_MAX;
		visit[a] = 1;
		q.push({ a,0 });
		bfs(b);
		if (mov != INT_MAX) cout << mov<<endl;
		else cout << "Impossible" << endl;
	}
	return 0;
}