#include <string>
using namespace std;
int map[22][22] = { 0 };
int solution(string dirs) {
	int answer = 0, x = 10, y = 10;
	for (auto d : dirs) {
		switch (d) {
		case 'U':
			if (y - 2 >= 0) {
				if (map[x][y - 1] == 0) {
					map[x][y - 1] = 1;
					answer++;
				}
				y -= 2;
			}
			break;
		case 'D':
			if (y + 2 < 22) {
				if (map[x][y + 1] == 0) {
					map[x][y + 1] = 1;
					answer++;
				}
				y += 2;
			}
			break;
		case 'L':
			if (x - 2 >= 0) {
				if (map[x - 1][y] == 0) {
					map[x - 1][y] = 1;
					answer++;
				}
				x -= 2;
			}
			break;
		case 'R':
			if (x + 2 < 22) {
				if (map[x + 1][y] == 0) {
					map[x + 1][y] = 1;
					answer++;
				}
				x += 2;
			}
			break;
		}
	}
	return answer;
}