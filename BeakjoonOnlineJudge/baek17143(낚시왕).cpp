#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
struct shark {
	int r,c,s, d, z;
};
int d[5][2] = { {0,0},{-1,0},{1,0},{0,1},{0,-1} }, gr, gc,sum=0;
shark mp[101][101];
vector<shark> cur;
int changeDir(int cd) {
	if (cd == 1) return 2;
	if (cd == 2) return 1;
	if (cd == 3) return 4;
	if (cd == 4) return 3;
}
void setShark(int f) {
	cur.clear();
	bool flag = 1;
	for(int i=1;i<=gr;i++)
		for (int j = 1; j <= gc; j++) {
			if (mp[i][j].z != 0) {
				if (j == f && flag) {
					flag = 0;	//³¬½Ã.
					sum += mp[i][j].z;
				}
				else cur.push_back(mp[i][j]);
				mp[i][j] = { 0,0,0,0,0 };
			}
		}
}
void moveShark() {
	for (auto s : cur) {
		int nr=s.r, nc=s.c, ns = s.s;
		if (s.d<=2) ns %= (2 * gr - 2);
		if (s.d > 2) ns %= (2 * gc - 2);

		for (int i = 0; i < ns; i++) {
			nr += d[s.d][0];
			nc += d[s.d][1];
			if (nr == 0 || nc == 0 || nr == gr + 1 || nc == gc + 1) {
				s.d = changeDir(s.d);
				nr += d[s.d][0] * 2;
				nc += d[s.d][1] * 2;
			}
		}
		if (mp[nr][nc].z < s.z) 
			mp[nr][nc] = { nr,nc,s.s,s.d,s.z };
	}
}
int main() {
	int m;
	scanf("%d %d %d", &gr, &gc, &m);
	for (int i = 0; i < m; i++) {
		int r, c, s, d, z;
		scanf("%d %d %d %d %d", &r, &c, &s, &d, &z);
		mp[r][c] = { r,c,s,d,z };
	}
	for (int f = 1; f <= gc; f++) {	// ³¬½Ã¿Õ ÀÌµ¿
		setShark(f);	// »ó¾î Àâ±â & ¼öÁý
		moveShark(); // »ó¾î ÀÌµ¿ & ¼·Ãë & ¹èºÐ
	}
	printf("%d", sum);
	return 0;
}