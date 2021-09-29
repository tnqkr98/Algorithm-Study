#include <iostream>
#include <queue>
#include <stack>
#include <memory.h>
using namespace std;
int map[101][101], d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
int visit[101][101],n,m; // 방문: 1, 접촉면 : 2
queue<pair<int, int>> q;
void bfs() {
	if (q.empty())
		return;
	int r, c;
	r = q.front().first;
	c = q.front().second;
	q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n&&nc < m && visit[nr][nc]==0) {
			if (map[nr][nc] == 0) {
				q.push({ nr,nc });
				visit[nr][nc] = 1;
			}
			else if (map[nr][nc] == 1)
				visit[nr][nc] = 2;
		}
	}
	bfs();
}
int melt() {
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (visit[i][j] == 2) {
				map[i][j] = 0;
				cnt++;
			}
	return cnt;
}
int main() {
	stack<int> s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			cin >> map[i][j];

	for (int t = 0;; t++) {
		memset(visit, 0, sizeof(visit));
		q.push({ 0,0 });
		visit[0][0] = 1;
		//외곽 공기 탐색 및 접촉면 체크
		bfs();
		s.push(melt());
		//접촉면을 공기로 변경, 접촉면이 0개면 중단
		if (s.top() == 0) {
			cout << t<<endl;
			s.pop();
			cout << s.top();
			break;
		}
	}
	return 0;
}