#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <memory.h>
using namespace std;
struct rc { int row, col,dist; };
queue<rc> q;
stack<rc> fish;
int n, arr[21][21], siz = 2, op1[] = { -1,0,0,1 }, op2[] = { 0,-1,1,0 }, time = 0, eat = 0;
int check[21][21] = { 0 };
void bfs() {
	if (q.empty())
		return;
	int r, c,d,nr,nc;
	r = q.front().row;
	c = q.front().col;
	d = q.front().dist;
	q.pop();
	for (int i = 0; i < 4; i++) {
		nr = r + op1[i];
		nc = c + op2[i];
		if (nr >= 0 && nr < n && nc >= 0 && nc < n && arr[nr][nc] <= siz && !check[nr][nc]) {
			q.push({ nr,nc,d + 1 });
			check[nr][nc] = 1;
			if (!fish.empty() && fish.top().dist != d + 1)
				return;
			if (arr[nr][nc] < siz && arr[nr][nc]) { //eatable
				if(fish.empty())
					fish.push({ nr,nc,d + 1 });
				else if (fish.top().row > nr){
					while(!fish.empty()) fish.pop();
					fish.push({ nr,nc,d + 1 });
				}
				else if(fish.top().row == nr)
					fish.push({ nr,nc,d + 1 });
			}
		}
	}	
	bfs();
}
int main() {
	int i, j, mc = 22,mr,d;
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 9) {
				q.push({ i,j,0 });
				check[i][j] = 1;
				arr[i][j] = 0;
			}
		}
	while (1) {
		bfs();
		if (fish.empty())
			break;
		while(!fish.empty()){
			if (fish.top().col < mc) {
				mr = fish.top().row;
				mc = fish.top().col;
				d = fish.top().dist;
			}
			fish.pop();
		}
		time += d;
		arr[mr][mc] = 0;
		eat++;
		while (!q.empty()) q.pop();
		if (eat == siz) {
			siz++;
			eat = 0;
		}
		memset(check, 0, sizeof(check));
		q.push({ mr,mc,0 });
		check[mr][mc] = 1;
		mc =22;
	}
	cout << time;
	return 0;
}