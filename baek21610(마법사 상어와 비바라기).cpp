#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
typedef struct {
	int r, c;
} RC;
int d[8][2] = { {0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1} };
int map[51][51], n, m;
bool dis[51][51];// 구름 사라진 칸 = 물이 증가한칸
vector<RC> route; //구름, 이동정보
queue<RC> cloud;
int watcopy(int r, int c) {		// 물복사버그
	int ret = 0;
	if (r - 1 >= 0 && c - 1 >= 0 && map[r - 1][c - 1] > 0) ret++;
	if (r + 1 < n && c - 1 >= 0 && map[r + 1][c - 1] > 0) ret++;
	if (r - 1 >= 0 && c + 1 < n && map[r - 1][c + 1] > 0) ret++;
	if (r + 1 < n && c + 1 < n && map[r + 1][c + 1] > 0) ret++;
	return ret;
}
int move(int cur,int mov,int s) {
	for (int i = 0; i < s; i++) {
		cur += mov;
		if (cur == n) cur = 0;
		if (cur == -1) cur = n - 1;
	}
	return cur;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		route.push_back({a-1,b});
	}
	cloud.push({ n - 1,0 });
	cloud.push({ n - 1,1 });
	cloud.push({ n - 2,0 });
	cloud.push({ n - 2,1 });

	for (int i = 0; i < m; i++) {
		int dir, s;
		dir = route[i].r;
		s = route[i].c;
		// 1. move
		int size = cloud.size();
		for (int j = 0; j < size; j++) {
			int r, c;
			r = move(cloud.front().r,d[dir][0],s);
			c = move(cloud.front().c,d[dir][1],s);
			// 2. increase
			map[r][c] += 1;
			// 3. disappear
			dis[r][c] = 1;
			cloud.pop();
		} 
		// 4. watcopy
		for(int j = 0;j<n;j++)
			for (int k = 0; k < n; k++) 
				if (dis[j][k])
					map[j][k] += watcopy(j, k);
		// 5. Add cloud
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				if (map[j][k] >= 2 && !dis[j][k]) {
					map[j][k] -= 2;
					cloud.push({ j,k });
				}
		memset(dis, 0, sizeof(dis));
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			sum += map[i][j];
	cout << sum;
	return 0;
}