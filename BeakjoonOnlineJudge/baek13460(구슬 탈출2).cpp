#include <iostream>
#include <queue>
using namespace std;
struct rc { int rr, rc, br, bc, c; };
char mmap[11][11];
bool visit[11][11][11][11];
int mmin = 1e9;
queue<rc> q;
rc moveRight(rc cur) {
	if (cur.rc < cur.bc) {
		while (mmap[cur.br][cur.bc + 1] != '#') {
			cur.bc++;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
		while (mmap[cur.rr][cur.rc + 1] != '#' && (cur.rr != cur.br || cur.rc + 1 != cur.bc || mmap[cur.br][cur.bc] == 'O')) {
			cur.rc++;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
	}
	else {
		while (mmap[cur.rr][cur.rc + 1] != '#') {
			cur.rc++;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
		while (mmap[cur.br][cur.bc + 1] != '#' && (cur.rr != cur.br || cur.rc != cur.bc + 1 || mmap[cur.rr][cur.rc] == 'O')) {
			cur.bc++;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
	}
	return cur;
}
rc moveLeft(rc cur) {
	if (cur.rc < cur.bc) {
		while (mmap[cur.rr][cur.rc - 1] != '#') {
			cur.rc--;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
		while (mmap[cur.br][cur.bc - 1] != '#' && (cur.rr != cur.br || cur.rc != cur.bc - 1 || mmap[cur.rr][cur.rc] == 'O')) {
			cur.bc--;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
	}
	else {
		while (mmap[cur.br][cur.bc - 1] != '#') {
			cur.bc--;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
		while (mmap[cur.rr][cur.rc - 1] != '#' && (cur.rr != cur.br || cur.rc - 1 != cur.bc || mmap[cur.br][cur.bc] == 'O')) {
			cur.rc--;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
	}
	return cur;
}
rc moveDown(rc cur) {
	if (cur.rr < cur.br) {
		while (mmap[cur.br+1][cur.bc] != '#') {
			cur.br++;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
		while (mmap[cur.rr + 1][cur.rc] != '#' && (cur.rr + 1 != cur.br || cur.rc != cur.bc || mmap[cur.br][cur.bc] == 'O')) {
			cur.rr++;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
	}
	else {
		while (mmap[cur.rr + 1][cur.rc] != '#') {
			cur.rr++;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
		while (mmap[cur.br + 1][cur.bc] != '#' && (cur.rr != cur.br + 1 || cur.rc != cur.bc || mmap[cur.rr][cur.rc] == 'O')) {
			cur.br++;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
	}
	return cur;
}
rc moveUp(rc cur) {
	if (cur.rr < cur.br) {
		while (mmap[cur.rr - 1][cur.rc] != '#') {
			cur.rr--;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
		while (mmap[cur.br - 1][cur.bc] != '#' && (cur.rr != cur.br - 1 || cur.rc != cur.bc || mmap[cur.rr][cur.rc] == 'O')) {
			cur.br--;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
	}
	else {
		while (mmap[cur.br - 1][cur.bc] != '#') {
			cur.br--;
			if (mmap[cur.br][cur.bc] == 'O') break;
		}
		while (mmap[cur.rr - 1][cur.rc] != '#' && (cur.rr - 1 != cur.br || cur.rc != cur.bc || mmap[cur.br][cur.bc] == 'O')) {
			cur.rr--;
			if (mmap[cur.rr][cur.rc] == 'O') break;
		}
	}
	return cur;
}
void bfs() {
	if (q.empty()) return;
	rc cur = q.front(); q.pop();
	if (mmap[cur.rr][cur.rc] == 'O' && mmap[cur.br][cur.bc] != 'O') {
		if (mmin > cur.c) mmin = cur.c;
		return;
	}
	if (mmap[cur.br][cur.bc] != 'O') {
		for (int i = 0; i < 4; i++) {
			rc ret;
			if (i == 0) ret = moveRight(cur);
			if (i == 1) ret = moveLeft(cur);
			if (i == 2) ret = moveDown(cur);
			if (i == 3) ret = moveUp(cur);
			if (!visit[ret.rr][ret.rc][ret.br][ret.bc]) {
				ret.c++;
				visit[ret.rr][ret.rc][ret.br][ret.bc] = 1;
				q.push(ret);
			}
		}
	}
	bfs();
}
int main() {
	int n, m; cin >> n >> m;
	int rr, rc, br, bc;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == 'R') {
				rr = i;
				rc = j;
				mmap[i][j] = '.';
			}
			if (mmap[i][j] == 'B') {
				br = i;
				bc = j;
				mmap[i][j] = '.';
			}
		}
	visit[rr][rc][br][bc] = 1;
	q.push({ rr,rc,br,bc,0 });
	bfs();
	if (mmin < 11) cout << mmin;
	else cout << -1;
	return 0;
}