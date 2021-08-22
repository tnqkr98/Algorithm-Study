//// https://www.acmicpc.net/problem/14502
//// 백준 14502번 : 연구소
//// 관련 알고리즘 : BFS, Brute Force
//
//#include <cstdio>
//#include <vector>
//#include <queue>
//#include <memory.h>
//#pragma warning(disable:4996)
//using namespace std;
//int map[8][8],zeroc=0,n,m,c=0;
//int check[8][8] = { 0 };
//vector<pair<int, int>> v, v2;
//queue<pair<int, int>> q;
//void bfs() {
//	int x, y;
//	if (q.empty())
//		return;
//	x = q.front().first;
//	y = q.front().second;
//	q.pop();
//
//	if (y + 1 < m && map[x][y + 1] == 0 && !check[x][y+1]) {
//		q.push(make_pair(x, y + 1));
//		check[x][y + 1] = 1;
//		c++;
//	}
//	if (y - 1 >=0 && map[x][y - 1] == 0 && !check[x][y - 1]) {
//		q.push(make_pair(x, y - 1));
//		check[x][y - 1] = 1;
//		c++;
//	}
//	if (x + 1 < n && map[x+1][y] == 0 && !check[x+1][y]) {
//		q.push(make_pair(x+1, y));
//		check[x + 1][y] = 1;
//		c++;
//	}
//	if (x - 1 >=0 && map[x-1][y] == 0 && !check[x -1][y]) {
//		q.push(make_pair(x-1, y));
//		check[x - 1][y] = 1;
//		c++;
//	}
//	bfs();
//}
//int main() {
//	int i, j, k,l,max=0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++) {
//			scanf("%d", &map[i][j]);
//			if (map[i][j] == 0) {
//				v.push_back(make_pair(i, j));
//				zeroc++;
//			}
//			else if (map[i][j] == 2)
//				v2.push_back(make_pair(i, j));
//		}
//	zeroc -= 3;
//	for (i = 0; i < v.size()-2; i++) {
//		for (j = i+1; j < v.size() - 1; j++) {
//			for (k = j + 1; k < v.size(); k++) {
//				for (l = 0; l < v2.size(); l++) 
//					q.push(v2[l]);
//				map[v[i].first][v[i].second] = 1;
//				map[v[j].first][v[j].second] = 1;
//				map[v[k].first][v[k].second] = 1;
//				bfs();
//				if (zeroc - c > max)
//					max = zeroc - c;
//				map[v[i].first][v[i].second] = 0;
//				map[v[j].first][v[j].second] = 0;
//				map[v[k].first][v[k].second] = 0;
//				c = 0;
//				memset(check, 0, sizeof(check));
//			}
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}