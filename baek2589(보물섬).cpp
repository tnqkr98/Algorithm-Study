#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <memory.h>
using namespace std;
struct rc { int r, c,d; };
int op1[4] = { 0,1,0,-1 }, op2[4] = { 1,0,-1,0 },n,m,mmax,gmax;
char map[51][51];
bool visit[51][51];
queue<rc> q;
void bfs() {
	if (q.empty())
		return;
	int r, c,d;
	r = q.front().r;
	c = q.front().c;
	d = q.front().d;
	q.pop();
	if (d > mmax) mmax = d;
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + op1[i];
		nc = c + op2[i];
		if (nr >= 0 && nr < n && nc >= 0 && nc < m && !visit[nr][nc] && map[nr][nc] == 'L') {
			q.push({ nr,nc,d + 1 });
			visit[nr][nc] = 1;
		}
	}
	bfs();
}
int main(){
	vector<rc> v;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			map[i][j] = s[j];
			if (s[j] == 'L')
				v.push_back({ i,j,0 });
		}
	}
	for (int i = 0; i < v.size(); i++) {
		mmax = 0;
		q.push({ v[i].r,v[i].c,0 });
		visit[v[i].r][v[i].c] = 1;
		bfs();
		memset(visit, 0, sizeof(visit));
		if (mmax > gmax) gmax = mmax;
	}
	cout << gmax;
	return 0;
}