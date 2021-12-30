#include <string>
#include <vector>
#include <memory.h>
using namespace std;
int map[60][60] = { 0 };
void rrotate(vector<vector<int>> &key) {
	vector<vector<int>> tmp(key.size(), vector<int>(key.size()));
	for (int j = key.size() - 1; j >= 0; j--)
		for (int i = 0; i < key.size(); i++)
			tmp[i][j] = key[key.size() - j - 1][i];
	key = tmp;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
	int n = key.size();
	int m = lock.size();
	for (int rotate = 0; rotate < 4; rotate++) {
		for (int r = 0; r < n + m - 1; r++) {
			for (int c = 0; c < n + m - 1; c++) {

				//생성
				for (int i = r; i < r + n; i++)
					for (int j = c; j < c + n; j++)
						map[i][j] = key[i - r][j - c];

				// 비교
				int cnt = 0;
				for (int i = n - 1; i < n + m - 1; i++)
					for (int j = n - 1; j < n + m - 1; j++)
						if (map[i][j] + lock[i - n + 1][j - n + 1] == 1)
							cnt++;

				if (cnt == m * m)
					return true;
				memset(map, 0, sizeof(map));
			}
		}
		if (rotate == 3) break;
		rrotate(key);
	}
	return false;
}
