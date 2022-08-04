#include <iostream>
#include <queue>
using namespace std;
struct rc {
	int r, c,d,mr;
};
char m[101][101];
int d[4][2] = { {1,0},{0,1},{-1,0},{0,-1} },w,h;
int mir[101][101];
//bool visit[101][101][4];
queue<rc> q;
bool range(int r, int c) {
	return r >= 0 && c>=0 && r<h && c<w;
}
void bfs() {
	if (q.empty()) return;
	rc cur = q.front(); q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = cur.r + d[i][0];
		nc = cur.c + d[i][1];
		if (range(nr, nc) && m[nr][nc] != '*' && cur.mr<mir[nr][nc]) {// && !visit[nr][nc][i]) {
			//visit[nr][nc][i] = 1;
			if (cur.d != i) {
				q.push({ nr,nc,i,cur.mr + 1 });
				if (cur.mr+1 < mir[nr][nc])
					mir[nr][nc] = cur.mr+1;
			}
			else {
				q.push({ nr,nc,i,cur.mr });
				if (cur.mr < mir[nr][nc])
					mir[nr][nc] = cur.mr;
			}
		}
	}
	bfs();
}
int main() {
	cin >> w >> h;
	bool flag = 0;
	int sr, sc,er,ec;
	for (int i = 0; i < h; i++) 
		for (int j = 0; j < w; j++) {
			cin >> m[i][j];
			mir[i][j] = 1e9;
			if (m[i][j] == 'C' && !flag){
				er = i; ec = j;
				flag = 1;
			}
			else if (m[i][j] == 'C' && flag) {
				sr = i; sc = j;
			}
		}
	mir[sr][sc] = 0;
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = sr + d[i][0];
		nc = sc + d[i][1];
		if (range(nr, nc) && m[nr][nc] != '*') {
			q.push({ nr,nc,i,0 });
			mir[nr][nc] = 0;
			//visit[nr][nc][i] = 1;
		}
	}
	bfs();
	cout << mir[er][ec];
	return 0;
}