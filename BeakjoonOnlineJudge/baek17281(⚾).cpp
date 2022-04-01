#include <iostream>
#include <algorithm>
#include <vector>
#include <memory.h>
using namespace std;
int game[50][10], ta[10], ru[3];
int ruMove(int n) {
	int res = 0;
	if (n == 1) {
		res = ru[2];
		ru[2] = ru[1];
		ru[1] = ru[0];
		ru[0] = 1;
	}
	else if (n == 2) {
		res = ru[2] + ru[1];
		ru[2] = ru[0];
		ru[1] = 1;
		ru[0] = 0;
	}
	else if (n == 3) {
		res = ru[2] + ru[1] + ru[0];
		ru[2] = 1;
		ru[1] = 0;
		ru[0] = 0;
	}
	else {
		res = ru[0] + ru[1] + ru[2] + 1;
		ru[0] = 0;
		ru[1] = 0;
		ru[2] = 0;
	}
	return res;
}
int main() {
	int n, max = 0; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 1; j <= 9; j++) cin >> game[i][j];
	ta[4] = 1;
	vector<int> p = { 2,3,4,5,6,7,8,9 };
	do {
		for (int i = 0; i < 9; i++) {
			if (i == 3) continue;
			if (i > 3) ta[i + 1] = p[i - 1];
			else ta[i + 1] = p[i];
		}
		int score = 0, cur = 1;
		for (int i = 0; i < n; i++) {
			int out = 0;
			memset(ru, 0, sizeof(ru));
			while (1) {
				if (game[i][ta[cur]] == 0) out++;
				else score += ruMove(game[i][ta[cur]]);
				cur++;
				if (cur == 10) cur = 1;
				if (out == 3) break;
			}
		}
		if (score > max) max = score;
	} while (next_permutation(p.begin(), p.end()));
	cout << max;
	return 0;
}