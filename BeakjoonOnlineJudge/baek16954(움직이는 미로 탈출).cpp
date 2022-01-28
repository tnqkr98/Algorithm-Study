#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
struct rc {int r, c;};
int mmap[9][9], d[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,-1},{-1,1} };
vector<rc> wall;
stack<rc> s;
void movewall() {
	for (int i = 0; i < wall.size(); i++) {
		if (wall[i].r + 1 < 8) {
			mmap[wall[i].r][wall[i].c] = '.';
			mmap[wall[i].r + 1][wall[i].c] = '#';
			wall[i].r++;
		}
		else if(wall[i].r+1 ==8)
			mmap[wall[i].r][wall[i].c] = '.';
	}
}
void findone() {
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (mmap[i][j] == 1)
				s.push({ i,j });
}
void umove() {
	while (!s.empty()) {
		int r = s.top().r;
		int c = s.top().c;
		if (mmap[r][c] != 1) {
			s.pop();
			continue;
		}
		for (int i = 0; i < 8; i++) {
			int nr, nc;
			nr = r + d[i][0];
			nc = c + d[i][1];
			if (nr >= 0 && nc >= 0 && nr < 8 && nc < 8 && mmap[nr][nc] != '#') 
				mmap[nr][nc] = 1;
		}
		s.pop();
	}
}
int main() {
	for (int i = 0; i < 8; i++) {
		string t; cin >> t;
		for (int j = 0; j < 8; j++) {
			mmap[i][j] = t[j];
			if (t[j] == '#') wall.push_back({ i,j });
		}
	}
	s.push({ 7,0 });
	mmap[7][0] = 1;
	while (!s.empty()) {
		umove();
		movewall();
		findone();
		if (mmap[0][7] == 1) break;
	}
	if (mmap[0][7] == 1) cout << 1;
	else cout << 0;
	return 0;
}