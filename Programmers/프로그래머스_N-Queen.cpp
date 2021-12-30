using namespace std;
bool check[13], map[13][13];
int gn, cnt = 0;
bool prove(int r, int c) {
	for (int i = 1; i < gn; i++) {
		if (r - i >= 0 && c - i >= 0 && map[r - i][c - i]) return 0;
		if (r - i >= 0 && c + i <= gn && map[r - i][c + i]) return 0;
	}
	return 1;
}
void backtrack(int node, int d) {
	if (d == gn) {
		cnt++;
		return;
	}
	for (int i = 0; i < gn; i++) {
		if (!check[i] && i != node + 1 && i != node - 1 && prove(d, i)) {
			check[i] = 1;
			map[d][i] = 1;
			backtrack(i, d + 1);
			map[d][i] = 0;
			check[i] = 0;
		}
	}
}
int solution(int n) {
	gn = n;
	for (int i = 0; i < n; i++) {
		check[i] = 1;
		map[0][i] = 1;
		backtrack(i, 1);
		map[0][i] = 0;
		check[i] = 0;
	}
	return cnt;
}