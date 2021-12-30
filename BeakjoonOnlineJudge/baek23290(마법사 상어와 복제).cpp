#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct fish {int r, c, d;};
struct dprior { int cnt, one, two, thr; };
bool cmp(dprior a, dprior b) {
	if (a.cnt > b.cnt) return 1;
	else if (a.cnt == b.cnt) 
		if (a.one < b.one) return 1;
		else if (a.one == b.one) {
			if (a.two < b.two) return 1;
			else if (a.two == b.two) {
				if (a.thr < b.thr) return 1;
			}
		}
	return 0;
}
int fd[9][2] = { {0,0},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1} };
int dd[4][2] = { {-1,0}, {0,-1},{1,0},{0,1} };
int Map[4][4], dMap[4][4],dr,dc;
vector<fish> fv,egg;
vector<dprior> dp;
bool boundCheck(int r, int c) {return r >= 0 && c >= 0 && r < 4 && c < 4;}
void makeEgg() {for (auto f : fv) egg.push_back(f);}
void decreBody() {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) 
			if(dMap[i][j] >0) dMap[i][j]--;
}
void fishMove() {
	for (int i = 0; i < fv.size(); i++) 
		for (int j = fv[i].d; j > fv[i].d-8; j--) {
			int dir = j;
			if (dir <= 0) dir += 8;
			int nr, nc;
			nr = fv[i].r + fd[dir][0];
			nc = fv[i].c + fd[dir][1];
			if (boundCheck(nr, nc) && Map[nr][nc] != 1 && dMap[nr][nc] == 0) {
				fv[i].r+= fd[dir][0];
				fv[i].c += fd[dir][1];
				fv[i].d = dir;
				break;
			}
		}
}
void delFish(int r, int c) {
	vector<fish> nf;
	for (auto f : fv)
		if (f.r == r && f.c == c) dMap[r][c] = 3;
		else nf.push_back(f);
	fv = nf;
}
int cntFish(int r,int c) {
	int res = 0;
	for (auto f : fv)
		if (f.r == r && f.c == c) res++;
	return res;
}
void makePrior(int a,int b,int c) {
	bool visit[4][4] = { 0 };
	int nr, nc,cnt=0;
	nr = dr + dd[a][0];
	nc = dc + dd[a][1];
	if (!boundCheck(nr, nc)) return;
	visit[nr][nc] = 1;
	cnt += cntFish(nr, nc);
	nr += dd[b][0];
	nc += dd[b][1];
	if (!boundCheck(nr, nc)) return;
	if(!visit[nr][nc]) cnt += cntFish(nr, nc);
	visit[nr][nc] = 1;
	nr += dd[c][0];
	nc += dd[c][1];
	if (!boundCheck(nr, nc)) return;
	if (!visit[nr][nc]) cnt += cntFish(nr, nc);
	dp.push_back({ cnt,a,b,c });
}
void duckMove() {
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 4; k++) makePrior(i, j, k);
	sort(dp.begin(), dp.end(), cmp);
	Map[dr][dc] = 0;
	dr += dd[dp[0].one][0];
	dc += dd[dp[0].one][1]; delFish(dr, dc);
	dr += dd[dp[0].two][0];
	dc += dd[dp[0].two][1]; delFish(dr, dc);
	dr += dd[dp[0].thr][0];
	dc += dd[dp[0].thr][1]; delFish(dr, dc);
	Map[dr][dc] = 1;
	dp.clear();
}
void hatEgg() {
	for (auto e:egg)fv.push_back(e);
	egg.clear();
}
int main() {
	int m, s; cin >> m >> s;
	for (int i = 0; i < m; i++) {
		int x, y, d; cin >> x >> y >> d;
		fv.push_back({ x - 1,y - 1,d });
	}
	cin >> dr >> dc;
	dr -= 1; dc -= 1; Map[dr][dc] = 1;
	while (s--) {
		makeEgg();
		fishMove();
		duckMove();
		hatEgg();
		decreBody();
	}
	cout << fv.size();
	return 0;
}