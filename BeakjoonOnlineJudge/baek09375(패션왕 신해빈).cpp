// https://www.acmicpc.net/problem/9375
// 백준 9375 : 패션왕 신해빈
// 관련 알고리즘 : math

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	int t, n, i, j,sum=1;
	string s;
	map<string, int> m;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> s >> s;
			if (m.find(s) == m.end())
				m.insert(make_pair(s, 1));
			else
				m.find(s)->second++;
		}
		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) 
			sum *= (it->second + 1);
		cout << sum - 1<<endl;
		sum = 1;
		m.clear();
	}
	return 0;
}