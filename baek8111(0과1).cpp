//#include <iostream>
//#include <memory.h>
//#include <queue>
//#include <string>
//using namespace std;
//bool visit[20001];
//typedef struct {
//	int m;
//	string s;
//} is;
//queue<is> q;
//int num;
//string bfs() {
//	if (q.empty()) return "";
//	int cur = q.front().m;
//	string path = q.front().s;
//	if (cur == 0)
//		return path;
//	q.pop();
//
//	if (!visit[(cur * 10) % num]) {
//		visit[(cur * 10) % num] = 1;
//		q.push({ (cur * 10) % num, path + "0" });
//	}
//	
//	if (!visit[((cur * 10) + 1) % num]) {
//		visit[((cur * 10) + 1) % num] = 1;
//		q.push({ ((cur * 10)+1) % num, path + "1" });
//	}
//
//	return bfs();
//}
//int main() {
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		cin >> num;
//		q.push({ 1,"1" });
//		visit[1] = 1;
//		cout<<bfs()<<endl;
//		while (!q.empty())q.pop();
//		memset(visit, 0, sizeof(visit));
//	}
//	return 0;
//}