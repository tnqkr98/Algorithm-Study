#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
int lcs[1001][1001];
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for(int i=1;i<=s1.size();i++)
		for (int j = 1; j <= s2.size(); j++) {
			if (s1[i - 1] != s2[j - 1])
				lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
			else
				lcs[i][j] = lcs[i - 1][j - 1] + 1;
		}
	int r = s1.size(), c = s2.size();
	stack<char> s;
	cout << lcs[r][c]<<endl;
	while (lcs[r][c] != 0) {
		if (lcs[r - 1][c] == lcs[r][c])
			r -= 1;
		else if (lcs[r][c - 1] == lcs[r][c])
			c -= 1;
		else {
			s.push(s1[r - 1]);
			r -= 1;
			c -= 1;
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	return 0;
}