#include <iostream>
#include <queue>
#include <string>
#include <memory.h>
using namespace std;
struct rc {
	int r, c;
};
char map[101][101];
bool check[101][101];
int op1[4] = { 0,1,0,-1 }, op2[4] = { 1,0,-1,0 },n;
queue<rc> q;
void bfs(char ch) {
	if (q.empty())
		return;
	int r, c;
	r = q.front().r;
	c = q.front().c;
	q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + op1[i];
		nc = c + op2[i];
		if (nr >= 0 && nr<n &&nc>=0&&nc<n&& !check[nr][nc] && map[nr][nc] == ch){
			q.push({ nr,nc });
			check[nr][nc] = 1;
		}
	}
	bfs(ch);
}
int main() {
	cin >> n;
	int rgb = 0, rg = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < n; j++) 
			map[i][j] = s[j];
	}
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) 
			if (!check[i][j]) {
				check[i][j] = 1;
				q.push({ i,j });
				bfs(map[i][j]);
				rgb++;
			}
		
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (map[i][j] == 'G')
				map[i][j] = 'R';
	memset(check, 0, sizeof(check));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) 
			if (!check[i][j]) {
				check[i][j] = 1;
				q.push({ i,j });
				bfs(map[i][j]);
				rg++;
			}
	
	cout << rgb << " " << rg;
	return 0;
}