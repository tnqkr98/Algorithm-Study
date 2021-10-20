#include <iostream>
#include <vector>
#include <stack>
#include <memory.h>
using namespace std;
int arr[50][50], n, one = 0, two = 0, three = 0;
int dx[4] = { 0,1,0,-1 }, dxx[5] = { 0,-1,1,0,0 };
int dy[4] = { -1,0,1,0 }, dyy[5] = { 0,0,0,-1,1 };
void counting(int n) {
	if (n == 1) one++;
	else if (n == 2) two++;
	else three++;
}
bool boundCheck(int r, int c) {
	return r >= 0 && c >= 0 && r < n&&c < n;
}
vector<int> origin;
vector<int> serial() {
	vector<int> res;
	bool flag = true;
	int r = n / 2, c = n / 2, dir = 0, siz = 1, i = 0;
	while (flag) {
		for (int j = 0; j < siz; j++) {
			r += dx[dir];
			c += dy[dir];
			if (r == 0 && c == 0) flag = false;
			if (arr[r][c] && res.size() < n*n && boundCheck(r, c))
				res.push_back(arr[r][c]);
		}
		if (i % 2 == 1) siz++;
		dir = (dir + 1) % 4;
		i++;
	}
	return res;
}
void explode() {
	bool flag = true;
	while (flag) {
		flag = false;
		vector<int> next;
		for (int i = 0; i < origin.size();) {
			int j = i, cnt = 0;
			while (j < origin.size() && origin[i] == origin[j]) {
				j++;
				cnt++;
			}
			if (cnt >= 4) {
				for (int k = 0; k < cnt; k++)
					counting(origin[i]);
				flag = true;
				i += cnt;
			}
			else {
				for (int k = 0; k < cnt; k++)
					next.push_back(origin[i]);
				i += cnt;
			}
		}
		origin = next;
	}
}
void increase() {
	vector<int> ne;
	stack<int> tmp;
	if (origin.size() == 0) return;
	tmp.push(origin[0]);
	for (int i = 1; i < origin.size(); i++) {
		if (tmp.top() == origin[i])
			tmp.push(origin[i]);
		else if (tmp.top() != origin[i]) {
			ne.push_back(tmp.size());
			ne.push_back(tmp.top());
			while (!tmp.empty()) tmp.pop();
			tmp.push(origin[i]);
		}
	}
	ne.push_back(tmp.size());
	ne.push_back(tmp.top());
	origin = ne;
}
int main() {
	int m; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> arr[i][j];
	while (m--) {
		int d, s; cin >> d >> s;
		int r = n / 2, c = n / 2;
		for (int i = 0; i < s; i++) {
			r += dxx[d];
			c += dyy[d];
			arr[r][c] = 0;
		}
		origin = serial();
		explode();
		increase();
		memset(arr, 0, sizeof(arr));
		r = n / 2, c = n / 2;
		int	dir = 0, siz = 1, i = 0;
		bool flag = false;
		for (int k = 0;; k++) {
			for (int j = 0; j < siz; j++) {
				r += dx[dir];
				c += dy[dir];
				if (i < origin.size()) arr[r][c] = origin[i];
				else {
					flag = true;
					break;
				}
				if (i < n*n) i++;
				else {
					flag = true;
					break;
				}
			}
			if (flag) break;
			if (k % 2 == 1) siz++;
			dir = (dir + 1) % 4;
		}
	}
	cout << one + two * 2 + three * 3;
	return 0;
}