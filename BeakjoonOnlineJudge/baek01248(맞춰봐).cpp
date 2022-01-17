#include <iostream>
#include <string>
#include <deque>
using namespace std;
int n, subsum[22][22], resSet[22][22];
deque<int> res;
bool flag = false;
void updateSum(int idx, bool reset) {
	for (int i = 0; i <= idx; i++)
		for (int j = idx; j < n; j++) {
			if (!reset) subsum[i][j] += res[idx];
			else subsum[i][j] -= res[idx];
		}
}
bool checkSum(int idx) {
	for (int i = 0; i <= idx; i++) {
		if (subsum[i][idx] > 0 && resSet[i][idx] != '+') return 0;
		if (subsum[i][idx] < 0 && resSet[i][idx] != '-') return 0;
		if (subsum[i][idx] == 0 && resSet[i][idx] != '0') return 0;
	}
	return 1;
}
void back(int d) {
	if (d == n) {
		for (int i = 0; i < n; i++) cout << res[i] << " ";
		flag = true;
		return;
	}
	for (int r = -10; r <= 10; r++) {
		res.push_back(r);
		updateSum(d, false);
		if (checkSum(d)) back(d + 1);
		if (flag) break;
		updateSum(d, true);
		res.pop_back();
	}
}
int main() {
	string s;
	cin >> n >> s;
	int k = 0;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++) resSet[i][j] = s[k++];
	back(0);
	return 0;
}