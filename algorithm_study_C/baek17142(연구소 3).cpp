#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>
#include <algorithm>
using namespace std;
struct rc { int r, c,t; };
queue<rc> q;
bool visit[51][51];
int map[51][51], d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} }, n, maxt = 0;
void bfs() {
	if (q.empty()) return;
	auto f = q.front();
	if (map[f.r][f.c] == 3 && f.t > maxt) maxt = f.t;
	q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = f.r + d[i][0];
		nc = f.c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n && nc < n && map[nr][nc] != 1 && !visit[nr][nc]) {
			visit[nr][nc] = 1;
			q.push({ nr,nc,f.t+1 });
			if (map[nr][nc] == 0) map[nr][nc] = 3;
		}
	}
	bfs();
}
bool isClear() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (map[i][j] == 0) return false;
	return true;
}
int main() {
	vector<rc> v;
	int m, tmap[51][51], min = 2500; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) 
				v.push_back({ i,j });
		}
	vector<int> comb(v.size(), 0);
	for (int i = 0; i < m; i++) comb[i] = 1;
	sort(comb.begin(), comb.end());
	do {
		memset(visit, 0, sizeof(visit));
		memcpy(tmap, map, sizeof(map));
		maxt = 0;
		for (int i = 0; i < v.size(); i++) 
			if (comb[i]) {
				q.push({ v[i].r,v[i].c,0});
				visit[v[i].r][v[i].c] = 1;
			}
		bfs();
		if(isClear() && maxt < min)
			min = maxt;
		memcpy(map, tmap, sizeof(tmap));
	} while (next_permutation(comb.begin(), comb.end()));
	if (min == 2500) cout << -1;
	else cout << min;
	return 0;
}