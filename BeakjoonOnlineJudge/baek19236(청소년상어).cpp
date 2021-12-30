#include <iostream>
#include <memory.h>
using namespace std;
typedef struct {
	int fish, d;
} FD;
FD fd[4][4];
int dir[9][2] = { {0,0},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1} };
int mmax = 0;
void swap(int ar, int ac, int br, int bc) {
	FD save = fd[ar][ac];
	fd[ar][ac] = fd[br][bc];
	fd[br][bc] = save;
}
void fishmove(int sr, int sc) {
	bool move;
	for (int k = 1; k <= 16; k++) {
		move = false;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (fd[i][j].fish == k) {
					int origin = fd[i][j].d;
					do {
						int mr, mc;
						mr = i + dir[fd[i][j].d][0];
						mc = j + dir[fd[i][j].d][1];
						if (mr >= 0 && mc >= 0 && mr < 4 && mc < 4 && !(mr == sr && mc == sc)) {
							swap(i, j, mr, mc);
							move = true;
							break;
						}
						else
							fd[i][j].d = (fd[i][j].d == 9) ? 1 : fd[i][j].d + 1;
					} while (fd[i][j].d != origin);
				}
				if (move) break;
			}
			if (move) break;
		}
	}
}
void back(int sr, int sc, int sd, int sum) {
	FD sfd[4][4];
	if (sum >= mmax)
		mmax = sum;
	fd[sr][sc].fish = 0;
	fd[sr][sc].d = 0;
	fishmove(sr, sc);
	for (int i = 0; i < 3; i++) {
		sr += dir[sd][0];
		sc += dir[sd][1];
		if (sr >= 0 && sc >= 0 && sr < 4 && sc < 4 && fd[sr][sc].fish != 0) {
			memcpy(sfd, fd, sizeof(fd));
			back(sr, sc, fd[sr][sc].d, sum + fd[sr][sc].fish);
			memcpy(fd, sfd, sizeof(fd));
		}
	}
}
int main() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int f, d;
			cin >> f >> d;
			fd[i][j].fish = f;
			fd[i][j].d = d;
		}
	}
	back(0, 0, fd[0][0].d, fd[0][0].fish);
	cout << mmax;
	return 0;
}