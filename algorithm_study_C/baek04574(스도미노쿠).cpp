#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int n, d[2][2] = { {0,1},{1,0} },t=1;
int dom[10][10],map[9][9];
bool eend=false;
bool Row[9][10], Col[9][10], Squ[9][10];
int findSqu(int r, int c) {
	return (r  / 3) * 3 + c/3;
}
bool isSuccess(int r, int c, int num) {
	if (!Row[r][num] && !Col[c][num] && !Squ[findSqu(r, c)][num])
		return true;
	return false;
}
void setArr(int r, int c, int num) {
	Row[r][num] = Col[c][num] = Squ[findSqu(r, c)][num] = true;
}
void resetArr(int r, int c, int num) {
	Row[r][num] = Col[c][num] = Squ[findSqu(r, c)][num] = false;
}
void back(int cur) {
	if (eend) return;
	if (cur == 81) {
		eend = 1;
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j)
				cout << map[i][j];
			cout << '\n';
		}
		eend = true;
		return;
	}
	//타일 선택
	int i = cur / 9, j = cur % 9;
	if (map[i][j] != 0)
		back(cur + 1);
	else {
		// 도미노 방향 선택
		for (int k = 0; k < 2; k++) {
			int ni, nj;
			ni = i + d[k][0]; nj = j + d[k][1];
			if (ni >= 9 || nj >= 9)continue; 
			if (map[ni][nj] != 0)continue; 

			// 도미노 선택
			for (int a = 1; a < 9; a++) 
				for (int b = a+1; b < 10; b++) {
					if (!dom[a][b]) {	// 사용하지 않은 도미노 라면
						dom[a][b] = dom[b][a] = 1;
						if (isSuccess(i, j, a) && isSuccess(ni, nj, b)) {
							map[i][j] = a;	
							map[ni][nj] = b;
							setArr(i, j, a);
							setArr(ni, nj, b);
							back(cur+1);
							map[i][j] = 0;
							map[ni][nj] = 0;
							resetArr(i, j, a);
							resetArr(ni, nj, b);
						}
									
						if (isSuccess(i, j, b) && isSuccess(ni, nj, a)) {
							map[i][j] = b;	
							map[ni][nj] = a;  
							setArr(i, j, b);
							setArr(ni, nj, a);
							back(cur + 1);
							map[i][j] = 0;	
							map[ni][nj] = 0;  
							resetArr(i, j, b);
							resetArr(ni, nj, a);
						}
						dom[a][b] = dom[b][a] = 0;
					}
				}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(1){
		cin >> n;
		if (n == 0)break;
		memset(dom, 0, sizeof(map));
		memset(map, 0, sizeof(map));
		memset(Row, 0, sizeof(Row));
		memset(Col, 0, sizeof(Col));
		memset(Squ, 0, sizeof(Squ));
		eend = false;
		for (int i = 0; i < n; i++) {
			int a, b;
			string as, bs;
			cin >> a >> as >> b >> bs;
			dom[a][b] = 1;
			dom[b][a] = 1;
			map[as[0] - 'A'][as[1] - '1'] = a;
			setArr(as[0] - 'A', as[1] - '1', a);
			map[bs[0] - 'A'][bs[1] - '1'] = b;
			setArr(bs[0] - 'A', bs[1] - '1', b);
		}
		for (int i = 1;i < 10; i++) {
			string t; cin >> t;
			map[t[0] - 'A'][t[1] - '1'] = i;
			setArr(t[0] - 'A',t[1] - '1', i);
		}
		cout << "Puzzle " << t++ << endl;
		back(0);
	}
	return 0;
}