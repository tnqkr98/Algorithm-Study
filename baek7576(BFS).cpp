#include <iostream>
#include <queue>
using namespace std;
short arr[1001][1001];
queue<pair<pair<int, int>, int>> q; // (i,j),day
int m, n, glo_day = 0, count0 = 0;
void bfs() {
	int r, c, day;
	if (q.empty()) return;
	r = q.front().first.first;
	c = q.front().first.second;
	day = q.front().second;
	if (day >= glo_day)
		glo_day = day;
	q.pop();
	if (c - 1 >= 0 && arr[r][c - 1] == 0) {
		q.push(make_pair(make_pair(r, c - 1), day + 1));
		arr[r][c - 1] = 1;
		count0--;
	}
	if (c + 1 < m && arr[r][c + 1] == 0) {
		q.push(make_pair(make_pair(r, c + 1), day + 1));
		arr[r][c + 1] = 1;
		count0--;
	}
	if (r - 1 >= 0 && arr[r - 1][c] == 0) {
		q.push(make_pair(make_pair(r-1, c), day + 1));
		arr[r-1][c] = 1;
		count0--;
	}
	if (r + 1 < n && arr[r + 1][c] == 0) {
		q.push(make_pair(make_pair(r + 1, c), day + 1));
		arr[r + 1][c] = 1;
		count0--;
	}
	bfs();
}
int main() {
	int i,j; // n row, m col
	cin >> m>>n;
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				q.push(make_pair(make_pair(i, j), 0));
			else if (arr[i][j] == 0)
				count0++;
		}
	if (count0 != 0) {
		bfs();
		if (glo_day != 0 && count0 == 0)
			cout << glo_day;
		else if (count0 != 0)
			cout << "-1";
	}
	else
		cout << "0";
	return 0;
}