#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct se { int s, e; };
int mon[11] = { 31,59,90,120,151,181,212,243,273,304,334 };
bool cmp(se a, se b) {
	if (a.s < b.s) return 1;
	else if (a.s == b.s) return a.e > b.e;
	return 0;
}
vector<se> v;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int s1, s2, e1, e2, s, e;
		cin >> s1 >> s2 >> e1 >> e2;
		if (s1 == 1) s = 0;
		else if (s1 != 1) s = mon[s1 - 2] + s2;
		if (e1 == 1) e = 0;
		else if (e1 != 1) e = mon[e1 - 2] + e2;
		v.push_back({ s,e });
	}
	sort(v.begin(), v.end(), cmp);
	int bige = 0, cnt = 0, res = 0, starti;

	for (int i = 0; i < v.size(); i++)
		if (v[i].e < 60) continue;
		else {
			if (v[i].s > 60) break;
			else if (v[i].e > bige) {
				bige = v[i].e;
				res = 1;
				cnt = 1;
				starti = i;
			}
		}

	if (res) {
		for (int i = starti; i < n; i++) {
			if (v[i].e > 334) {
				res = cnt;
				break;
			}
			int maxNexte = bige, nexti = 0;
			for (int j = i + 1; j < n; j++) {
				if (v[j].s <= bige && v[j].e > maxNexte) {
					maxNexte = v[j].e;
					nexti = j;
				}
			}
			if (nexti != 0) {
				cnt++;
				bige = maxNexte;
				i = nexti - 1;
				if (bige > 334) {
					res = cnt;
					break;
				}
			}
			else {
				if (bige > 334) res = cnt;
				else res = 0;
				break;
			}
		}
	}

	cout << res;
	return 0;
}