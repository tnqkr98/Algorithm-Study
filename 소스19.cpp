//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//typedef struct {
//	int end, cost;
//} ec;
//vector<vector<ec>> inj;
//vector<int> trap;
//int mincost[1001], num, eend;
//bool isTrap(int n) {
//	for (int i = 0; i < trap.size(); i++)
//		if (trap[i] == n)
//			return true;
//	return false;
//}
//void update(int t) {
//	vector<ec> tmp = inj[t];
//	inj[t].clear();
//	for (int i = 1; i <= num; i++)
//		if (i != t) {
//			vector<ec> v;
//			for (auto it = inj[i].begin(); it != inj[i].end(); it++) {
//				if ((*it).end == t)
//					inj[t].push_back({ i,(*it).cost });
//				else
//					v.push_back(*it);
//			}
//			inj[i] = v;
//		}
//
//	for (auto enco : tmp)
//		inj[enco.end].push_back({ t,enco.cost });
//}
//void dfs(int s, int cost) {
//	if (s == eend)
//		return;
//	if (isTrap(s))
//		update(s);
//	for (int i = 0; i < inj[s].size(); i++) {
//		int dest = inj[s][i].end;
//		int nc = cost + inj[s][i].cost;
//		if (mincost[dest] > nc) {
//			mincost[dest] = nc;
//			dfs(dest, nc);
//		}
//	}
//}
//int solution(int n, int start, int end, vector<vector<int>> roads, vector<int> traps) {
//	num = n; eend = end;
//	for (int i = 0; i <= n; i++)
//		inj.push_back(vector<ec>());
//	for (int i = 0; i < roads.size(); i++)
//		inj[roads[i][0]].push_back({ roads[i][1],roads[i][2] });
//	for (int i = 1; i <= n; i++)
//		mincost[i] = 1000000000;
//	trap = traps;
//	mincost[start] = 0;
//	dfs(start, 0);
//	return mincost[end];
//}
//
//int main() {
//	vector<vector<int>> roads = { {1, 2, 1 },{3, 2, 1 },{2,4,1} };
//	vector<int>traps = { 2 ,3};
//	cout << solution(4, 1, 4, roads, traps);
//	return 0;
//}