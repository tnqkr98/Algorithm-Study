// https://www.acmicpc.net/problem/15683
// BaekJoon No.15683 : °¨½Ã
// Algorithm : Brute Force

#include <cstdio>
#include <vector>
#include <memory.h>
#pragma warning(disable:4996)
using namespace std;
struct rc {int r, c, num;};
int arr[9][9] = { 0 }, m, n, gmin = 81;
vector<rc> v;
void up(int sr,int sc){
	for (int i = sr-1; i >= 0; i--) {
		if (arr[i][sc] == 0)
			arr[i][sc] = 7;
		else if (arr[i][sc] == 6)
			break;
	}
}
void down(int sr, int sc) {
	for (int i = sr + 1; i < m; i++) {
		if (arr[i][sc] == 0)
			arr[i][sc] = 7;
		else if (arr[i][sc] == 6)
			break;
	}
}
void left(int sr, int sc) {
	for (int i = sc - 1; i >=0; i--) {
		if (arr[sr][i] == 0)
			arr[sr][i] = 7;
		else if (arr[sr][i] == 6)
			break;
	}
}
void right(int sr, int sc) {
	for (int i = sc + 1; i < n; i++) {
		if (arr[sr][i] == 0)
			arr[sr][i] = 7;
		else if (arr[sr][i] == 6)
			break;
	}
}

void recur(int d) {
	int c = 0;
	if (d == v.size()) {
		for (int i = 0; i < m; i++) 
			for (int j = 0; j < n; j++) 
				if (arr[i][j] == 0)
					c++;
		if (c < gmin)
			gmin = c;
		return;
	}
	int tarr[9][9];
	memcpy(tarr, arr, sizeof(tarr));

	switch (v[d].num) {
	case 1:
		up(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		down(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		left(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		right(v[d].r, v[d].c); recur(d + 1);
		break;
	case 2:
		up(v[d].r, v[d].c); down(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		left(v[d].r, v[d].c); right(v[d].r, v[d].c); recur(d + 1);
		break;
	case 3:
		up(v[d].r, v[d].c);left(v[d].r, v[d].c);recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		left(v[d].r, v[d].c);down(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		up(v[d].r, v[d].c); right(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		right(v[d].r, v[d].c);down(v[d].r, v[d].c); recur(d + 1);
		break;
	case 4:
		up(v[d].r, v[d].c); left(v[d].r, v[d].c); 
		right(v[d].r, v[d].c);recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		up(v[d].r, v[d].c); right(v[d].r, v[d].c);
		down(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		up(v[d].r, v[d].c); left(v[d].r, v[d].c);
		down(v[d].r, v[d].c); recur(d + 1);
		memcpy(arr, tarr, sizeof(tarr));
		right(v[d].r, v[d].c); left(v[d].r, v[d].c);
		down(v[d].r, v[d].c); recur(d + 1);
		break;
	case 5:
		up(v[d].r, v[d].c); 
		left(v[d].r, v[d].c);
		right(v[d].r, v[d].c); 
		down(v[d].r, v[d].c);
		recur(d + 1);
		break;
	}

}

int main() {
	int i, j;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++) 
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] != 0 && arr[i][j] != 6)
				v.push_back({ i,j,arr[i][j]});
		}

	recur(0);
	printf("%d", gmin);
	return 0;
}