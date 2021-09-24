#include <iostream>
#include <queue>
using namespace std;
struct fireball {int r, c, m, d, s;};
int dir[8][2] = {{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
queue<fireball> q;
int mapMass[51][51],mapSpeed[51][51],mapCount[51][51],mapEven[51][51],mapLastdir[51][51];
int n, M, K;
void move() {
	while (!q.empty()) {
		auto fire = q.front();q.pop();
		int nr, nc;
		nr = fire.r;
		nc = fire.c;
		for (int i = 0; i < fire.s; i++) {
			nr += dir[fire.d][0];
			nc += dir[fire.d][1];
			if (nr == n + 1) nr = 1;
			if (nc == n + 1) nc = 1;
			if (nr == 0) nr = n;
			if (nc == 0) nc = n;
		}
		mapMass[nr][nc] += fire.m;
		mapMass[fire.r][fire.c] -= fire.m;
		mapSpeed[nr][nc] += fire.s;
		mapSpeed[fire.r][fire.c] -= fire.s;
		mapCount[nr][nc]++;
		mapCount[fire.r][fire.c]--;
		mapLastdir[nr][nc] = fire.d;
		if (fire.d % 2 == 0) {
			mapEven[nr][nc]++;
			mapEven[fire.r][fire.c]--;
		}
	}
}
void push() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (mapCount[i][j] == 1)
				q.push({ i,j,mapMass[i][j],mapLastdir[i][j],mapSpeed[i][j] });
}
void divide() {
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) 
			if (mapCount[i][j] > 1) {
				int mass = mapMass[i][j] / 5;
				int speed = mapSpeed[i][j] / mapCount[i][j];
				if (mass == 0) {
					mapEven[i][j] = mapMass[i][j] = mapCount[i][j] = mapSpeed[i][j] = 0;
					continue;
				}
				if ((mapEven[i][j] == mapCount[i][j]) || mapEven[i][j] == 0) {
					for (int k = 0; k < 4; k++)
						q.push({ i,j,mass,k * 2,speed });
					mapEven[i][j] = 4;
				}
				else {
					for (int k = 1; k <= 4; k++)
						q.push({ i,j,mass,k * 2 - 1,speed });
					mapEven[i][j] = 0;
				}
				mapCount[i][j] = 4;
				mapMass[i][j] = mass * 4;
				mapSpeed[i][j] = speed * 4;
			}	
}

int main() {
	cin >> n >> M >> K;
	for (int i = 0; i < M; i++) {
		int r, c, m, d, s;
		cin >> r >> c >> m >> s >> d;
		q.push({ r,c,m,d,s });
		mapCount[r][c]++;
		mapMass[r][c] += m;
		mapSpeed[r][c] += s;
		if (d % 2 == 0) mapEven[r][c]++;
	}
	while (K--) {
		move();
		push();
		divide();
	}
	int mass = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			mass += mapMass[i][j];
	cout << mass;
	return 0;
}