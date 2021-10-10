#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
struct nc {int num, cnt;};
bool cmp(nc a, nc b) {
	if (a.cnt < b.cnt)
		return 1;
	else if (a.cnt == b.cnt) 
		if (a.num < b.num)
			return 1;
	return 0;
}
int arr[100][100],rmax=3,cmax=3;
void rsort() {
	int cl = 0;
	for (int i = 0; i < rmax; i++) {
		vector<nc> v;
		map<int, int> m;
		for (int j = 0; j < cmax; j++) {
			if (arr[i][j] == 0) continue;
			m[arr[i][j]]++;
		}
		for (auto mp : m) 
			v.push_back({ mp.first,mp.second });
		sort(v.begin(), v.end(), cmp);
		int siz = 0;
		for (auto vp : v) {
			arr[i][siz++] = vp.num;
			if (siz == 100) break;
			arr[i][siz++] = vp.cnt;
			if (siz == 100) break;
		}
		for (int j = siz; j < 100; j++) 
			if (arr[i][j] != 0) arr[i][j] = 0;
		cl = max(cl, siz);
	}
	cmax = cl;
}
void csort() {
	int rl = 0;
	for (int i = 0; i < cmax; i++) {
		vector<nc> v;
		map<int, int> m;
		for (int j = 0; j < rmax; j++) {
			if (arr[j][i] == 0) continue;
			m[arr[j][i]]++;
		}
		for (auto mp : m)
			v.push_back({ mp.first,mp.second });
		sort(v.begin(), v.end(), cmp);
		int siz = 0;
		for (auto vp : v) {
			arr[siz++][i] = vp.num;
			if (siz == 100) break;
			arr[siz++][i] = vp.cnt;
			if (siz == 100) break;
		}
		for (int j = siz; j < 100; j++) 
			if (arr[j][i] != 0) arr[j][i] = 0;
		rl = max(rl, siz);
	}
	rmax = rl;
}
int main() {
	int r, c, k,t=0; cin >> r >> c >> k;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	while (1) {
		if (r - 1 < rmax&& c - 1 < cmax&& arr[r - 1][c - 1] == k) {
			cout << t;
			break;
		}
		if (t == 100) {
			cout << -1;
			break;
		}
		t++;
		if (rmax >= cmax) rsort();
		else csort();
	}
	return 0;
}