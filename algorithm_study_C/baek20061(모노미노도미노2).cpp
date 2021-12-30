#include <iostream>
#include <vector>
using namespace std;
// 지정->이동->파괴->영역처리
struct rc {int r, c;};
vector<rc> mv;
int Map[10][10],score=0;
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
		Map[bv[i].r][bv[i].c] = 1;
		Map[gv[i].r][gv[i].c] = 1;
	}
}
void graBlue(int start) {
	for (int i = start-1; i >=4; i--) {
		for (int j = 0; j < 4; j++) {
			Map[j][i + 1] = Map[j][i];
			Map[j][i] = 0;
		}
	}
}
void graGreen(int start) {
	for (int i = start - 1; i >= 4; i--) {
		for (int j = 0; j < 4; j++) {
			Map[i + 1][j] = Map[i][j];
			Map[i][j] = 0;
		}
	}
}
void clear() {
	//blue
	for (int i = 6; i < 10; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) 
			if (Map[j][i] == 1) cnt++;
		if (cnt == 4) {
			for (int j = 0; j < 4; j++) Map[j][i] = 0;	//clear
			graBlue(i);
			score++;
		}
	}
	//green
	for (int i = 6; i < 10; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++)
			if (Map[i][j] == 1) cnt++;
		if (cnt == 4) {
			for (int j = 0; j < 4; j++) Map[i][j] = 0;	//clear
			graGreen(i);
			score++;
		}
	}
}
void zone() {
	bool isb=1, isg=1;
	while (isb || isg) {
		isb = 0, isg = 0;
		for (int i = 4; i < 6; i++)
			for (int j = 0; j < 4; j++) {
				if (Map[j][i] == 1) isb = 1;
				if (Map[i][j] == 1) isg = 1;
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
			if (Map[i][j] == 1) res++;
			if (Map[j][i] == 1) res++;
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