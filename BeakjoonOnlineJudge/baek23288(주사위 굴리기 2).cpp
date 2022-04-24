#include <iostream>
#include <memory.h>
#include <queue>
#include <vector>
using namespace std;
struct rc { int r, c; };
int mp[21][21],dis[4][3],score[21][21],ndis[4][3],r=0,c=0,d=1, n, m;
queue<rc> q;
vector<rc> path;
bool visit[21][21];
void right() {
	c++;
	ndis[0][1] = dis[0][1];
	ndis[1][0] = dis[3][1];
	ndis[1][1] = dis[1][0];
	ndis[1][2] = dis[1][1];
	ndis[2][1] = dis[2][1];
	ndis[3][1] = dis[1][2];
}
void left() {
	c--;
	ndis[0][1] = dis[0][1];
	ndis[1][0] = dis[1][1];
	ndis[1][1] = dis[1][2];
	ndis[1][2] = dis[3][1];
	ndis[2][1] = dis[2][1];
	ndis[3][1] = dis[1][0];
}
void up() {
	r--;
	ndis[0][1] = dis[1][1];
	ndis[1][1] = dis[2][1];
	ndis[2][1] = dis[3][1];
	ndis[3][1] = dis[0][1];
	ndis[1][0] = dis[1][0];
	ndis[1][2] = dis[1][2];
}
void down() {
	r++;
	ndis[0][1] = dis[3][1];
	ndis[1][1] = dis[0][1];
	ndis[2][1] = dis[1][1];
	ndis[3][1] = dis[2][1];
	ndis[1][0] = dis[1][0];
	ndis[1][2] = dis[1][2];
}
void move() {
	switch (d) {
		case 1: {
			if(c<m-1) right();
			else {
				left();
				d = 3;
			}
			break;
		}
		case 2: {
			if(r<n-1) down();
			else {
				up();
				d = 4;
			}
			break;
		}
		case 3: { 
			if (c > 0) left();
			else {
				right();
				d = 1;
			}
			break;
		}
		case 4: {
			if(r>0) up(); 
			else {
				down();
				d = 2;
			}
			break;
		}
	}
	memcpy(dis, ndis, sizeof(dis));
}
void bfs(int b) {
	if (q.empty()) return;
	int d[4][2] = { {0,1}, {1,0},{0,-1},{-1,0} };
	rc cur = q.front(); q.pop();
	path.push_back(cur);
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = cur.r + d[i][0];
		nc = cur.c + d[i][1];
		if (nr >= 0 && nr < n&&nc >= 0 && nc < m && !visit[nr][nc] && mp[nr][nc]==b) {
			q.push({ nr,nc });
			visit[nr][nc]=1;
		}
	}
	bfs(b);
}
int main() {
	int k,sum=0; cin >> n >> m>>k;
	dis[0][1] = 2;
	dis[1][0] = 4;
	dis[1][1] = 1;
	dis[1][2] = 3;
	dis[2][1] = 5;
	dis[3][1] = 6;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) cin >> mp[i][j];
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++) {
			if (!visit[i][j]) {
				path.clear();
				q.push({ i,j });
				visit[i][j] = 1;
				bfs(mp[i][j]);
				for (auto p : path) 
					score[p.r][p.c] = path.size()*mp[i][j];
			}
		}
	while (k--) {
		move();
		sum += score[r][c];
		if (dis[3][1] > mp[r][c]) {
			d++;
			if (d == 5) d = 1;
		}
		else if (dis[3][1] < mp[r][c]) {
			d--;
			if (d == 0) d = 4;
		}
	}
	cout << sum;
	return 0;
}