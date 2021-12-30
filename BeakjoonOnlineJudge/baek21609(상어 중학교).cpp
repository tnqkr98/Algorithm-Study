#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>
#include <algorithm>
using namespace std;
struct block { int r, c;};
struct group { int siz,rain, r, c; vector<block> b; };
int Map[21][21],n;
bool bbcmp(block a, block b) {
	if (a.r < b.r) return 1;
	else if (a.r == b.r) {
		if (a.c < b.c) return 1;
	}
	return 0;
}
bool ggcmp(group a, group b) {
	if (a.siz > b.siz) return 1;
	else if (a.siz == b.siz) {
		if (a.rain > b.rain) return 1;
		else if (a.rain == b.rain) {
			if (a.r > b.r) return 1;
			else if (a.r == b.r) {
				if (a.c > b.c) return 1;
			}
		}
	}
	return 0;
}
vector<group> gv;
vector<block> bv;
queue<block> q;
bool visit[21][21] = { 0 };
int d[4][2] = { {0,1},{1,0},{-1,0},{0,-1} },raincnt=0;
void bfs(int color) {
	if (q.empty())return;
	int r, c;
	r = q.front().r;
	c = q.front().c;
	q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n&&nc < n && (Map[nr][nc] == color || Map[nr][nc] == 0) && !visit[nr][nc]) {
			q.push({ nr,nc });
			visit[nr][nc] = 1;
			bv.push_back({ nr,nc });
			if (Map[nr][nc] == 0) raincnt++;
		}
	}
	bfs(color);
}
void down(int r,int c){
	int tar = Map[r][c];
	for (int i = 1; r+i < n; i++) {
		if (Map[r + i][c] == -2) {
			Map[r + i - 1][c] = -2;
			Map[r + i][c] = tar;
		}
		else break;
	}
}
void gravity() {
	for(int i=n-1;i>=0;i--)
		for (int j = 0; j < n; j++) 
			if (Map[i][j] >= 0) down(i, j);
}
void rot() {
	int tmp[21][21] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			tmp[n-1-j][i] = Map[i][j];
	memcpy(Map, tmp, sizeof(tmp));
}
int main() {
	int m,sum=0; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> Map[i][j];
	while (1) {
		gv.clear();
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				if (Map[i][j]>0) {
					memset(visit, 0, sizeof(visit));
					visit[i][j] = 1;
					raincnt = 0;
					while (!q.empty()) q.pop();
					bv.clear();
					bv.push_back({ i,j });
					q.push({ i,j });
					bfs(Map[i][j]);
					if (bv.size() >= 2) {
						sort(bv.begin(), bv.end(), bbcmp);	// 기준블록 찾기
						for (int k = 0; k < bv.size(); k++)
							if (Map[bv[k].r][bv[k].c] == Map[i][j]) {
								group g = { bv.size(),raincnt,bv[k].r,bv[k].c,bv };
								gv.push_back(g);
								break;
							}
					}
				}
			}
		if (gv.size() == 0) break;
		sort(gv.begin(), gv.end(), ggcmp); // find big group
		for (int i = 0; i < gv[0].siz; i++) // delete
			Map[gv[0].b[i].r][gv[0].b[i].c] = -2;
		sum += (gv[0].siz*gv[0].siz);
		gravity();rot();gravity();
	}
	cout << sum;
	return 0;
}