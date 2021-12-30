#include <string>
#include <vector>
using namespace std;
int m[1001][1001] = { 0 };
vector<int> solution(int n) {
	vector<int> answer;
	bool end = false;
	int num = 1, opi = 2;
	int op[3][2] = { {1,0},{0,1},{-1,-1} };
	for (int i = 0; i < n; i++)
		m[i][0] = num++;
	for (int i = 1; i < n; i++)
		m[n - 1][i] = num++;
	int r = n - 1, c = n - 1;
	while (num <= (n*(n + 1)) / 2) {
		if (m[r + op[opi][0]][c + op[opi][1]] == 0) {
			r += op[opi][0];
			c += op[opi][1];
			m[r][c] = num++;
		}
		else {
			opi += 1;
			opi %= 3;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (m[i][j] != 0)
				answer.push_back(m[i][j]);
			else
				break;
		}
	}
	return answer;
}