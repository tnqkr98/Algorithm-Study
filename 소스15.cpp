//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//using namespace std;
//struct qnode {
//	int n, level;
//};
//int cnt[51] = { 0 };
//vector<int>adj[51];
//queue<qnode>q;
//int levelMax[4] = { 0 };
//int ccount;
//void cntChild(int node) {
//	for (int i = 0; i < adj[node].size(); i++) {
//		ccount++;
//		cntChild(adj[node][i]);
//	}
//}
//
//int answer = 0;
//void bfs() {
//	int node, level;
//	bool ok = true;
//	if (q.empty())
//		return;
//	node = q.front().n;
//	level = q.front().level;
//	q.pop();
//	if (level == 1 && cnt[node] == levelMax[1])
//		ok = false;
//	if (level == 2 && cnt[node] == levelMax[2])
//		ok = false;
//	if (level == 3 && cnt[node] == levelMax[3])
//		ok = false;
//	if (ok) {
//		answer++;
//		for (int i = 0; i < adj[node].size(); i++) {
//			if (level < 4) {
//				if (cnt[adj[node][i]] > levelMax[level + 1])
//					levelMax[level + 1] = cnt[adj[node][i]];
//			}
//			answer++;
//			q.push({ adj[node][i] ,level + 1 });
//		}
//	}
//	bfs();
//}
//
//int solution(int n, vector<vector<int>> edges) {
//	for (int i = 0; i < edges.size(); i++)
//		adj[edges[i][0]].push_back(edges[i][1]);
//
//	for (int i = 1; i < n; i++) {
//		ccount = 0;
//		cntChild(i);
//		cnt[i] = ccount;
//	}
//	q.push({ 0,0 });
//	bfs();
//	return answer-2;
//}
//
//int main() {
//	vector<int> v0 = { 0,1 };
//	vector<int> v1 = { 0,2 };
//	vector<int> v2 = { 0,3 };
//	vector<int> v3 = { 1,4 };
//	vector<int> v4 = { 1,5 };
//	vector<int> v5 = { 2,6 };
//	vector<int> v6 = { 3,7 };
//	vector<int> v7 = { 3,8 };
//	vector<int> v8 = { 3,9 };
//	vector<int> v9 = { 4,10 };
//	vector<int> v10 = { 4,11 };
//	vector<int> v11 = { 5,12 };
//	vector<int> v12 = { 5,13 };
//	vector<int> v13 = { 6,14 };
//	vector<int> v14 = { 6,15 };
//	vector<int> v15 = { 6,16 };
//	vector<int> v16 = { 8,17 };
//	vector<int> v17 = { 8,18 };
//	vector < vector<int>> vv;
//	vv.push_back(v0);
//	vv.push_back(v1);
//	vv.push_back(v2);
//	vv.push_back(v3);
//	vv.push_back(v4);
//	vv.push_back(v5);
//	vv.push_back(v6);
//	vv.push_back(v7);
//	vv.push_back(v8);
//	vv.push_back(v9);
//	vv.push_back(v10);
//	vv.push_back(v11);
//	vv.push_back(v12);
//	vv.push_back(v13);
//	vv.push_back(v14);
//	vv.push_back(v15);
//	vv.push_back(v16);
//	vv.push_back(v17);
//	cout<<solution(19, vv)-3;
//	return 0;
//}