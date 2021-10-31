#include <iostream>
#include <vector>
using namespace std;
// 지정->이동->파괴->영역처리
struct rc {int r, c;};
vector<rc> mv;
int Map[10][10], score = 0, tilenum = 1, d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
void mov(int t) {
	vector<rc> bv=mv, gv=mv;
	// blue
	while (1) 
		if (t == 1) {
			if (bv[0].c + 1 < 10 && !Map[bv[0].r][bv[0].c + 1])
				bv[0].c += 1;
			else break;
		}
		else {
			if (bv[0].c + 1 < 10 && !Map[bv[0].r][bv[0].c + 1] &&
				bv[1].c + 1 < 10 && !Map[bv[1].r][bv[1].c + 1]) {
				bv[0].c += 1;
				bv[1].c += 1;
			}
			else break;
		}
	// green
	while (1) {
		if (t == 1) {
			if (gv[0].r+1 < 10 && !Map[gv[0].r+1][gv[0].c])
				gv[0].r += 1;
			else break;
		}
		else {
			if (gv[0].r+1 < 10 && !Map[gv[0].r+1][gv[0].c] &&
				gv[1].r+1 < 10 && !Map[gv[1].r+1][gv[1].c]) {
				gv[0].r += 1;
				gv[1].r += 1;
			}
			else break;
		}
	}
	for (int i = 0; i < gv.size(); i++) {
		Map[bv[i].r][bv[i].c] = tilenum;
		Map[gv[i].r][gv[i].c] = tilenum;
	}
	tilenum++;
}
bool boundCheck(int r,int c) {return r >= 0 && c >= 0 && r < 10 && c < 10;}
int whatType(vector<rc> tile) {
	rc a = tile[0]; rc b = tile[1];
	if (a.r + 1 == b.r) return 1; // 0 ddddddd
}
vector<vector<rc>> findTiles(bool green) {
	vector<vector<rc>> res;
	bool visit[10][10] = { 0 };
	for(int i=9;i>=4;i--)
		for (int j = 0; j < 4; j++) {
			if (green && Map[i][j] > 0 && !visit[i][j]) {
				vector<rc> tile;
				tile.push_back({ i,j });
				visit[i][j] = 1;
				for (int k = 0; k < 4; k++) {
					int nr, nc;
					nr = i + d[k][0];
					nc = j + d[k][1];
					if (boundCheck(nr, nc) && Map[nr][nc] == Map[i][j] && !visit[nr][nc]) {
						tile.push_back({ nr,nc });
						visit[nr][nc] = 1;
					}
				}
				res.push_back(tile);
			}	
			else if (!green && Map[j][i] > 0 && !visit[j][i]) {	// blue
				vector<rc> tile;
				tile.push_back({ j,i });
				visit[j][i] = 1;
				for (int k = 0; k < 4; k++) {
					int nr, nc;
					nr = j + d[k][0];
					nc = i + d[k][1];

					if (boundCheck(nr, nc) && Map[nr][nc] == Map[j][i] && !visit[nr][nc]) {
						tile.push_back({ nr,nc });
						visit[nr][nc] = 1;
					}
				}
				res.push_back(tile);
			}
		}
	return res;
}
void graBlue() {
	bool moved = true;
	while (moved) {
		moved = false;
		vector<vector<rc>> tiles = findTiles(0);
		for (auto tile : tiles) {
			int tnum = Map[tile[0].r][tile[0].c];
			if (tile.size() == 1) {
				if (boundCheck(tile[0].r, tile[0].c+1) && Map[tile[0].r][tile[0].c+1] == 0) {
					Map[tile[0].r][tile[0].c+1] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					moved = true;
				}
			}
			else if (tile.size() == 2 && boundCheck(tile[0].r, tile[0].c+1) && boundCheck(tile[1].r, tile[1].c+1)) {
				if (Map[tile[0].r][tile[0].c+1] == 0 && Map[tile[1].r][tile[1].c+1] == 0) {
					Map[tile[0].r][tile[0].c+1] = tnum;
					Map[tile[1].r][tile[1].c+1] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					Map[tile[1].r][tile[1].c] = 0;
					moved = true;
				}
				else if (Map[tile[0].r][tile[0].c + 1] == tnum && Map[tile[1].r][tile[1].c + 1] == 0) {
					Map[tile[0].r][tile[0].c + 1] = tnum;
					Map[tile[1].r][tile[1].c + 1] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					Map[tile[1].r][tile[1].c] = tnum;
					moved = true;
				}
				else if (Map[tile[0].r][tile[0].c + 1] == 0 && Map[tile[1].r][tile[1].c + 1] == tnum) {
					Map[tile[0].r][tile[0].c + 1] = tnum;
					Map[tile[1].r][tile[1].c + 1] = tnum;
					Map[tile[0].r][tile[0].c] = tnum;
					Map[tile[1].r][tile[1].c] = 0;
					moved = true;
				}
			}
		}
	}
}
void graGreen() {
	bool moved = true;
	while (moved) {
		moved = false;
		vector<vector<rc>> tiles = findTiles(1);
		for (auto tile : tiles) {
			int tnum = Map[tile[0].r][tile[0].c];
			if (tile.size() == 1) {
				if (boundCheck(tile[0].r + 1,tile[0].c) && Map[tile[0].r + 1][tile[0].c] == 0) {
					Map[tile[0].r + 1][tile[0].c] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					moved = true;
				}
			}
			else if(tile.size() == 2 && boundCheck(tile[0].r + 1, tile[0].c) && boundCheck(tile[1].r + 1, tile[1].c)){
				if (Map[tile[0].r + 1][tile[0].c] == 0 && Map[tile[1].r + 1][tile[1].c] == 0) {
					Map[tile[0].r + 1][tile[0].c] = tnum;
					Map[tile[1].r + 1][tile[1].c] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					Map[tile[1].r][tile[1].c] = 0;
					moved = true;
				}
				else if (Map[tile[0].r + 1][tile[0].c] == tnum && Map[tile[1].r + 1][tile[1].c] == 0) {
					Map[tile[0].r + 1][tile[0].c] = tnum;
					Map[tile[1].r + 1][tile[1].c] = tnum;
					Map[tile[0].r][tile[0].c] = 0;
					Map[tile[1].r][tile[1].c] = tnum;
					moved = true;
				}
				else if (Map[tile[0].r + 1][tile[0].c] == 0 && Map[tile[1].r + 1][tile[1].c] == tnum) {
					Map[tile[0].r + 1][tile[0].c] = tnum;
					Map[tile[1].r + 1][tile[1].c] = tnum;
					Map[tile[0].r][tile[0].c] = tnum;
					Map[tile[1].r][tile[1].c] = 0;
					moved = true;
				}
			}
		}
	}
}
void clear() {
	bool flag = true;
	//blue
	while (flag) {
		flag = false;
		for (int i = 6; i < 10; i++) {
			int cnt = 0;
			for (int j = 0; j < 4; j++)
				if (Map[j][i]>0) cnt++;
			if (cnt == 4) {
				for (int j = 0; j < 4; j++) Map[j][i] = 0;	//clear
				score++;
				flag = true;
			}
		}
		if(flag) graBlue();
	}
	//green
	flag = true;
	while (flag) {
		flag = false;
		for (int i = 6; i < 10; i++) {
			int cnt = 0;
			for (int j = 0; j < 4; j++)
				if (Map[i][j] >0) cnt++;
			if (cnt == 4) {
				for (int j = 0; j < 4; j++) Map[i][j] = 0;	//clear
				score++;
				flag = true;
			}
		}
		if(flag) graGreen();
	}
}
void zone() {
	bool isb=1, isg=1;
	while (isb || isg) {
		isb = 0, isg = 0;
		for (int i = 4; i < 6; i++)
			for (int j = 0; j < 4; j++) {
				if (Map[j][i] > 0) isb = 1;
				if (Map[i][j] > 0) isg = 1;
			}
		if (isb)
			for (int i = 8; i >= 4; i--) {
				for (int j = 0; j < 4; j++) {
					Map[j][i + 1] = Map[j][i];
					Map[j][i] = 0;
				}
			}
		if (isg)
			for (int i = 8; i >= 4; i--) {
				for (int j = 0; j < 4; j++) {
					Map[i + 1][j] = Map[i][j];
					Map[i][j] = 0;
				}
			}
	}
}
int cnt() {
	int res = 0;
	for(int i=6;i<10;i++)
		for (int j = 0; j < 4; j++) {
			if (Map[i][j] >0) res++;
			if (Map[j][i] > 0) res++;
		}
	return res;
}
int main() {
	int n; cin >> n;
	while (n--) {
		mv.clear();
		int t, x, y; cin >> t >> x >> y;
		mv.push_back({ x,y });
		if (t == 2) mv.push_back({ x,y+1 });
		else if(t==3) mv.push_back({ x+1,y});
		mov(t);
		clear();
		zone();
	}
	cout << score<<endl<<cnt();
	return 0;
}