#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <memory.h>
using namespace std;
struct rc { int r, c; };
int d[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
vector<string> mp;
queue<rc> q;
bool visit[5][5];
bool range(int r, int c) {
	return r >= 0 && c >= 0 && r<5 && c<5;
}
bool dist(int cr, int cc, int dr, int dc) {
	return (abs(cr - dr) + abs(cc - dc)) <= 2;
}
bool bfs(int sr, int sc) {
	if (q.empty()) return false;
	auto cur = q.front(); q.pop();
	for (int i = 0; i<4; i++) {
		int nr, nc;
		nr = cur.r + d[i][0];
		nc = cur.c + d[i][1];
		if (range(nr, nc) && dist(sr, sc, nr, nc) && !visit[nr][nc] && mp[nr][nc] != 'X') {
			if (mp[nr][nc] == 'P') return true;
			else {
				visit[nr][nc] = 1;
				q.push({ nr,nc });
			}
		}
	}
	return bfs(sr, sc);
}
vector<int> solution(vector<vector<string>> places) {
	vector<int> answer;
	for (int t = 0; t<5; t++) {
		mp = places[t];
		bool flag = false;
		for (int i = 0; i<5; i++) {
			for (int j = 0; j<5; j++) {
				if (mp[i][j] == 'P') {
					memset(visit, 0, sizeof(visit));
					while (!q.empty()) q.pop();
					q.push({ i,j });
					visit[i][j] = 1;
					if (bfs(i, j)) {
						flag = 1;
						break;
					}
				}
			}
			if (flag) break;
		}
		if (flag) answer.push_back(0);
		else answer.push_back(1);
	}
	return answer;
}
int main() {
	vector <vector<string>> v
		= { {"POOOP", "OXXOX", "OPXPX", "OOXOX", "POXXP"},{"POOPX", "OXPXP", "PXXXO", "OXXXO", "OOOPP"},{"PXOPX", "OXOXP", "OXPOX", "OXXOP", "PXPOX"},{"OOOXX", "XOOOX", "OOOXX", "OXOOX", "OOOOO" }, { "PXPXP", "XPXPX", "PXPXP", "XPXPX", "PXPXP" } };
	solution(v);
	return 0;
}