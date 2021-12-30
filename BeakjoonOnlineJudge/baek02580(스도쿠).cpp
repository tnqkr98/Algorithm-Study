// https://www.acmicpc.net/problem/2580
// ½ºµµÄí(sudoku)

#include <iostream>
#include <vector>
using namespace std;
short arr[9][9];
vector<pair<int, int>> v;
int clear = 0;
void back(int d) {
	int i, j, k, conti = 0, row, col;
	if (d == v.size()) {
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
				if (!arr[i][j])
					return;
		clear = 1;
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
		return;
	}
	row = v[d].first;
	col = v[d].second;
	for (i = 1; i <= 9; i++) {
		for (j = 0; j < 9; j++)
			if (arr[row][j] == i) {
				conti = 1;
				break;
			}
		for (j = 0; j < 9; j++)
			if (conti || arr[j][col] == i) {
				conti = 1;
				break;
			}
		for (j = row - row % 3; j < (row - row % 3) + 3; j++)
			for (k = col - col % 3; k < (col - col % 3) + 3; k++)
				if (conti || arr[j][k] == i) {
					conti = 1;
					break;
				}
		if (conti) {
			conti = 0;
			continue;
		}

		arr[row][col] = i;
		back(d + 1);
		if (!clear)
			arr[row][col] = 0;
	}
	return;
}
int main() {
	int i, j, c = 0;
	for (i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0)
				v.push_back(make_pair(i, j));
		}
	back(0);
	return 0;
}