#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dir[5][2] = { {0,0},{0,1},{0,-1},{-1,0},{1,0} },n,k,color[12][12];
struct Mal {int r, c, h, d;};
vector<int> pan[12][12];
Mal mal[10];
vector<int> onTopOf(Mal cur,bool red) {
	vector<int> res,remain;
	int newh = 0;
	for (int i = 0; i < pan[cur.r][cur.c].size(); i++) {
		if (i >= cur.h) res.push_back(pan[cur.r][cur.c][i]);
		else remain.push_back(pan[cur.r][cur.c][i]);
	}
	pan[cur.r][cur.c] = remain;
	if (red) reverse(res.begin(), res.end());
	return res;
}
/*bool isFour() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (pan[i][j].size() > 3)
				return 1;
	return 0;
}*/
void move(vector<int> top,int nr,int nc) {
	for (auto i : top) {
		pan[nr][nc].push_back(i);
		mal[i].r = nr;
		mal[i].c = nc;
		mal[i].h = pan[nr][nc].size()-1;
	}
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> color[i][j];
	for (int i = 0; i < k; i++) {
		int r, c, d; cin >> r >> c >> d;
		mal[i] = { r-1,c-1,0,d };
		pan[r - 1][c - 1].push_back(i);
	}
	int turn = 0;
	bool flag = false;
	while (turn <= 1000) {
		if (flag) break;
		for (int i = 0; i < k; i++) {
			int t = 2;
			while (t--) {
				int nr, nc;
				nr = mal[i].r + dir[mal[i].d][0];
				nc = mal[i].c + dir[mal[i].d][1];
				if (nr >= 0 && nc >= 0 && nr < n&&nc < n && color[nr][nc] != 2) {
					vector<int> top;
					if(color[nr][nc]==0) top = onTopOf(mal[i],false);
					else top = onTopOf(mal[i], true);
					move(top, nr, nc);
					if (pan[nr][nc].size()>3) flag = true;
					break;
				}
				else {
					if (t == 0) break;
					if (mal[i].d == 1) mal[i].d = 2;
					else if (mal[i].d == 2) mal[i].d = 1;
					else if (mal[i].d == 3) mal[i].d = 4;
					else if (mal[i].d == 4) mal[i].d = 3;
				}
			}
			if (flag) break;
		}
		turn++;
	}
	if (turn == 0 || turn == 1001)cout << -1;
	else cout << turn;
	return 0;
}