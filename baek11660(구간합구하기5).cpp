//#include <cstdio>
//#pragma warning(disable:4996)
//using namespace std;
//int map[1025][1025],d[1025][1025];
//int main() {
//	int n, m;
//	scanf("%d %d", &n,&m);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			scanf("%d", &map[i][j]);
//	d[1][1] = map[1][1];
//	for (int i = 2; i <= n; i++) {
//		d[1][i] = d[1][i - 1] + map[1][i];
//		d[i][1] = d[i - 1][1] + map[i][1];
//	}
//	for (int i = 2; i <= n; i++) 
//		for (int j = 2; j <= n; j++) 
//			d[i][j] = d[i - 1][j] + d[i][j - 1] + map[i][j] - d[i - 1][j - 1];
//	for (int i = 0; i < m; i++) {
//		int x1, y1, x2, y2, res;
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		res = d[x2][y2] - d[x2][y1 - 1] - d[x1 - 1][y2] + d[x1 - 1][y1 - 1];
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
