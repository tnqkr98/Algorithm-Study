#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int wgt[27] = { 0 };
int realwgt[27] = { 0 };
bool cmp(pair<char, int> a, pair<char, int> b) {
	return a.second > b.second;
}
int main() {
	int n;
	string s;
	vector<string> v;
	vector<pair<char, int>> wv;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		reverse(s.begin(), s.end());
		v.push_back(s);
		int num = 1;
		for (int j = 0; j < s.size(); j++) {
			wgt[s[j] - 'A'] += num;
			num *= 10;
		}
	}
	for (int i = 0; i < 27; i++)
		wv.push_back(make_pair('A' + i, wgt[i]));
	sort(wv.begin(), wv.end(), cmp);
	int num = 9;
	for (int i = 0; i < 27; i++)
		realwgt[wv[i].first-'A'] = num--;
	int res = 0;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < v[i].size(); j++) 
			res += realwgt[v[i][j] - 'A']*pow(10,j);
	cout << res;
	return 0;
}