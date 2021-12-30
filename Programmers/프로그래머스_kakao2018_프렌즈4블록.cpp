#include <string>
#include <vector>
#include <iostream>
using namespace std;
char map[31][31] = { 0 };
int gm, gn;
int find() {
	int ans = 0;
	int del[31][31] = { 0 };
	for (int i = 0; i < gm - 1; i++)
		for (int j = 0; j < gn - 1; j++)
			if (map[i][j] != '0' && map[i][j] == map[i][j + 1] && map[i][j] == map[i + 1][j] && map[i][j] == map[i + 1][j + 1])
			{
				del[i][j]++;
				del[i + 1][j]++;
				del[i][j + 1]++;
				del[i + 1][j + 1]++;
			}

	for (int i = 0; i < gm; i++)
		for (int j = 0; j < gn; j++)
			if (del[i][j] != 0) {
				ans++;
				map[i][j] = '0';
			}

	return ans;
}
void down() {
	char tar;
	for (int i = gm; i > 0; i--)
		for (int j = 0; j < gn; j++)
			if (map[i][j] == '0')
				for (int t = i - 1; t >= 0; t--)
					if (map[t][j] != '0') {
						tar = map[t][j];
						map[i][j] = tar;
						map[t][j] = '0';
						break;
					}
}
int solution(int m, int n, vector<string> board) {
	int answer = 0, f = 1;
	gm = m; gn = n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			map[i][j] = board[i][j];
	while (f != 0) {
		f = find();
		answer += f;
		down();
	}
	return answer;
}