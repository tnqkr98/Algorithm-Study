#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct rc {int r, c;};
vector<rc> v;
queue<rc> q;
int d[6][2] = { {-1,0},{0,-1},{-1,1},{0,1},{1,-1},{1,0} }, mcolor=0,n;
bool visit[51][51];
char mmap[51][51];
int findColor(int r,int c) {
	bool cset[4] = { 0 };
	for (int i = 0; i < 6; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n&&nc < n && mmap[nr][nc]!='-' && mmap[nr][nc] != 'X') 
			cset[mmap[nr][nc] - '0'] = 1;
	}
	for (int i = 1; i <= 3; i++)
		if (!cset[i]) return i;
	return 0;
}

void bfs() {
	if (q.empty()) return;
	rc cur = q.front(); q.pop();
	for (int i = 0; i < 6; i++) {
		int nr, nc;
		nr = cur.r + d[i][0];
		nc = cur.c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n&&nc < n&&mmap[nr][nc] == 'X'&&!visit[nr][nc]) {
			visit[nr][nc] = 1;
			int color = findColor(nr, nc);
			mmap[nr][nc] = '0' + color;
			if (color > mcolor) mcolor = color;
			q.push({ nr,nc });
		}
	}
	bfs();
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 'X') v.push_back({ i,j });
		}
	for (auto c : v) 
		if (!visit[c.r][c.c]) {
			if (mcolor == 0) mcolor = 1;
			visit[c.r][c.c] = 1;
			mmap[c.r][c.c] = '1';
			q.push({ c.r,c.c });
  			bfs();
		}
	cout << mcolor;
	return 0;
}