#include <iostream>
#include <memory.h>
#include <queue>
using namespace std;
struct rc { int r, c; };
int Map[50][50],n,m,room=0,Maxroom=0,visit[50][50];
queue<rc> q;
bool bcheck(int r,int c) {return r >= 0 && c >= 0 && r < n&&c < m;}
void bfs() {
	if (q.empty()) return;
	int r, c;
	r = q.front().r;
	c = q.front().c; q.pop();
	room += 1; if (room > Maxroom) Maxroom = room;
	if ((Map[r][c] | (1 << 0)) != Map[r][c] && bcheck(r, c - 1) && !visit[r][c - 1]) {
		visit[r][c - 1] = 1;
		q.push({ r,c - 1 });
	}
	if ((Map[r][c] | (1 << 1)) != Map[r][c] && bcheck(r - 1, c) && !visit[r-1][c]){
		visit[r-1][c] = 1;
		q.push({ r-1,c});
	}
	if ((Map[r][c] | (1 << 2)) != Map[r][c] && bcheck(r, c + 1) && !visit[r][c+1]) {
		visit[r][c + 1] = 1;
		q.push({ r,c + 1 });
	}
	if ((Map[r][c] | (1 << 3)) != Map[r][c] && bcheck(r + 1, c) && !visit[r+1][c]) {
		visit[r+1][c] = 1;
		q.push({ r+1,c });
	}
	bfs();
}
int findSol() {
	int roomCnt = 0;
	memset(visit, 0, sizeof(visit));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!visit[i][j]) {
				roomCnt++;
				room = 0;
				visit[i][j] = 1;
				q.push({ i,j });
				bfs();
			}
	return roomCnt;
}
int main() {cin >> m>> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> Map[i][j];
	int cnt = findSol();
	cout << cnt << endl << Maxroom<<endl;

	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < 4; k++) {
				int save = Map[i][j];
				Map[i][j] = Map[i][j] & ~(1 << k);
				findSol();
				Map[i][j] = save;
			}
		}
	cout << Maxroom;
	return 0;
}