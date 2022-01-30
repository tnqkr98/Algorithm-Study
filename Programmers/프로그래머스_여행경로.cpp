#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <deque>
using namespace std;
map<string, vector<string>> adj;
map<string, int> visit;
deque<string> p;
int tsize = 0, ssize = 0, flag = 0;
void dfs(string from) {
	if (tsize == ssize) {
		flag = 1;
		return;
	}
	for (auto i : adj[from]) {
		if (visit[from + i] != 0) {
			p.push_back(i);
			visit[from + i]--;
			ssize++;
			dfs(i);
			if (flag) return;
			ssize--;
			visit[from + i]++;
			p.pop_back();
		}
	}
}
vector<string> solution(vector<vector<string>> tickets) {
	tsize = tickets.size();
	for (auto i : tickets) {
		adj[i[0]].push_back(i[1]);
		sort(adj[i[0]].begin(), adj[i[0]].end());
		visit[i[0] + i[1]] += 1;
	}
	p.push_back("ICN");
	dfs("ICN");
	vector<string>ans;
	for (auto i : p) ans.push_back(i);
	return ans;
}