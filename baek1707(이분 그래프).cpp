#include <iostream>
#include <vector>
#include <memory.h>
#include <string>
using namespace std;
vector<int> graph[20001];
int state[20001];
bool endflag = false;
string res = "YES";
void dfs(int n, int cur) {
	if (endflag) return;
	for (auto i : graph[n]) {
		if (state[i] == 0) {
			if (cur == 1) {
				state[i] = 2;
				dfs(i, 2);
			}
			else {
				state[i] = 1;
				dfs(i, 1);
			}
		}
		else if (state[i] == cur) {
			endflag = true;
			res = "NO";
			return;
		}
	}
}
int main() {
	int k; cin >> k;
	while (k--) {
		int v, e; cin >> v >> e;
		for (int i = 1; i < 20001; i++)
			graph[i].clear();
		memset(state, 0, sizeof(state));
		endflag = false;
		res = "YES";
		for (int i = 0; i < e; i++) {
			int a, b; cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		for (int i = 1; i <= v; i++) {
			if (state[i] == 0) {
				state[i] = 1;
				dfs(i, 1);
			}
			if (endflag) break;
		}
		cout << res << endl;
	}
	return 0;
}