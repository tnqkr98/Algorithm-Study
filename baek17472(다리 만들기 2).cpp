#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct rc { int r, c; };
struct sed { int s, e, d; };
struct cmp {
	bool operator()(sed a, sed b) {
		return a.d > b.d;
	}
};
bool visit[10][10];
int map[10][10], d[4][2] = { {-1,0},{0,1},{1,0},{0,-1} },n,m;
int curnode = 1,parent[7];
queue<rc> q;
priority_queue<sed, vector<sed>, cmp> pq;
bool lineCheck(int nr, int nc) {return nr >= 0 && nc >= 0 && nr < n && nc < m;}
void bfs() {
	if (q.empty()) return;
	auto f = q.front(); q.pop();
	map[f.r][f.c] = curnode;
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = f.r + d[i][0];
		nc = f.c + d[i][1];
		if (lineCheck(nr,nc) && map[nr][nc] != 0 && !visit[nr][nc]) {
			visit[nr][nc] = 1;
			q.push({ nr,nc });
		}
	}
	bfs();
}
void makeEdge(int start,rc cur,int dr, int dc) {
	int len = 1;
	cur.r += dr;
	cur.c += dc;
	while (lineCheck(cur.r, cur.c) && map[cur.r][cur.c] ==0) {
		int tr, tc;
		tr = cur.r + dr;
		tc = cur.c + dc;
		if (len>=2 && lineCheck(tr, tc)&&map[tr][tc] != 0 && start != map[tr][tc]) {
			pq.push({ start,map[tr][tc],len });
			break;
		}
		len++;
		cur.r += dr;
		cur.c += dc;
	}
}
int getParent(int a) {
	for (; a != parent[a]; a = parent[a]);
	return a;
}
void Union(int a, int b) {
	a = getParent(a);
	b = getParent(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (!visit[i][j] && map[i][j]!=0) {
				q.push({ i,j });
				visit[i][j] = 1;
				bfs();
				curnode++;
			}
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			if (map[i][j] != 0) {	// 섬발견
				for (int dir = 0; dir < 4; dir++) { // 섬특정위치서 4방향검사
					int nr, nc;
					nr = i + d[dir][0];
					nc = j + d[dir][1];
					if (lineCheck(nr, nc) && map[nr][nc] == 0) // 바다발견시, 해당방향으로 다리 건설
						makeEdge(map[i][j],{ i,j }, d[dir][0], d[dir][1]);
				}
			}
	for (int i = 0; i < 7; i++) parent[i] = i;
	int mst = 0;
	while (!pq.empty()) {
		int s, e,d;
		s = pq.top().s;
		e = pq.top().e;
		d = pq.top().d; pq.pop();
		if (getParent(s) != getParent(e)) {
			mst += d;
			Union(s, e);
		}
	}
	bool failflag = 0;
	for (int i = 1; i < curnode; i++)
		if (getParent(1) != getParent(i)) {
			failflag = 1; break;
		}
	
	if (failflag || mst == 0) cout << -1;
	else cout << mst;
	return 0;
}