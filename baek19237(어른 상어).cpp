#include <iostream>
#include <vector>
using namespace std;
// 방향설정 -> 냄새감소 -> 이동
struct shark {
	bool in;
	int r, c,dir;
	int prior[5][4];
};
int d[5][2] = { {0,0},{-1,0},{1,0},{0,-1},{0,1} };
int Map[20][20],n,m,k;
int smap[20][20];
vector<shark> shv;
bool bcheck(int r,int c) {return r >= 0 && c >= 0 && r < n && c < n;}
void posDir() {
	for (int i = 1; i <= m; i++) {
		shark cur = shv[i];
		if (cur.in) {
			bool flag = true;
			for (int j = 0; j < 4; j++) { // 빈칸 찾기
				int nr, nc;
				nr = cur.r + d[cur.prior[cur.dir][j]][0];
				nc = cur.c + d[cur.prior[cur.dir][j]][1];
				if (bcheck(nr, nc) && !Map[nr][nc]) {
					shv[i].dir = cur.prior[cur.dir][j];
					flag = false;
					break;
				}
			}
			if (flag)  //  빈칸이 주변에 없다면
				for (int j = 0; j < 4; j++) {
					int nr, nc;
					nr = cur.r + d[cur.prior[cur.dir][j]][0];
					nc = cur.c + d[cur.prior[cur.dir][j]][1];
					if (bcheck(nr, nc) && Map[nr][nc] == i) {
						shv[i].dir = cur.prior[cur.dir][j];
						break;
					}
				}
		}
	}
}
void smdwn() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (smap[i][j] > 0) {
				smap[i][j]--;
				if (smap[i][j] == 0) Map[i][j] = 0;
			}
}
void mov() {
	for (int i = m; i >= 1; i--) 
		if (shv[i].in) {
			shv[i].r += d[shv[i].dir][0];
			shv[i].c += d[shv[i].dir][1];
			if (Map[shv[i].r][shv[i].c] == 0) {
				Map[shv[i].r][shv[i].c] = i;
				smap[shv[i].r][shv[i].c] = k;
			}
			else if (Map[shv[i].r][shv[i].c] > i) { // 자기보다 큰게있음
				shv[Map[shv[i].r][shv[i].c]].in = false;
				Map[shv[i].r][shv[i].c] = i;
				smap[shv[i].r][shv[i].c] = k;
			}
			else if (Map[shv[i].r][shv[i].c] == i)  // 자기 냄새로 
				smap[shv[i].r][shv[i].c] = k;
			else shv[i].in = false;
		}
}
int cntSh() {
	int cnt = 0;
	for (int i = 1; i <= m; i++) 
		if (shv[i].in) cnt++;
	return cnt;
}
int main() {
	int t=0; cin >> n >> m >> k;
	shv = vector<shark>(m + 1);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> Map[i][j];
			if (Map[i][j] != 0) {
				shv[Map[i][j]] = { 1,i,j };
				smap[i][j] = k;
			}
		}
	for (int i = 1; i <= m; i++) {
		int dir; cin >> dir;
		shv[i].dir = dir;
	}
	for (int i = 1; i <= m; i++) // 상어번호
		for (int j = 1; j <= 4; j++)  // 방향 번호
			for (int x = 0; x < 4; x++) {  // 방향별 우선순위
				int td; cin >> td;
				shv[i].prior[j][x] = td;
			}
	while (t <= 1000) {
		posDir();
		smdwn();
		mov();
		t++;
		if (cntSh() == 1) break;
	}
	if (t > 1000) cout << -1;
	else cout << t;
	return 0;
}