//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct rc { int r, c; };
//int op1[4] = { 0,1,0,-1 }, op2[4] = { 1,0,-1,0 },s, m, n;
//queue<rc> q;
//bool visit[101][101];
//void bfs() {
//	if (q.empty())
//		return;
//	int r, c;
//	r = q.front().r;
//	c = q.front().c;
//	q.pop();
//	for (int i = 0; i < 4; i++) {
//		int nr, nc;
//		nr = r + op1[i];
//		nc = c + op2[i];
//		if (nr >= 0 && nr < m &&nc >= 0 && nc < n && !visit[nr][nc]) {
//			visit[nr][nc] = 1;
//			q.push({ nr,nc });
//			s++;
//		}
//	}
//	bfs();
//}
//int main() {
//	int k,cnt=0;
//	vector<int> v;
//	cin >> m >> n >> k;
//	for (int i = 0; i < k; i++) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		for (int x = b; x <d; x++) 
//			for (int y = a; y <c; y++) 
//				visit[x][y] = 1;
//	}
//	for (int i = 0; i < m; i++) 
//		for (int j = 0; j < n; j++) 
//			if (!visit[i][j]) {
//				s = 1;
//				q.push({ i,j });
//				visit[i][j] = 1;
//				bfs();
//				v.push_back(s);
//				cnt++;
//			}
//		
//	sort(v.begin(), v.end());
//	cout << cnt << endl;
//	for (int i = 0; i < v.size(); i++) 
//		cout << v[i] << " ";
//	return 0;
//}