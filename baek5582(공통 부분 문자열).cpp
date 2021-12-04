#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int d[4002][4002];
int main() {
	string s1, s2; cin >> s1 >> s2;
	int mmax = 0;
	for(int i=0;i<s1.size();i++)
		for (int j = 0; j < s2.size(); j++) {
			if (i == 0 || j == 0) {
				if (s1[i] == s2[j]) {
					d[i + 1][j + 1] = 1;
					mmax = max(mmax, 1);
				}
				continue;
			}
			if (s1[i] == s2[j] && s1[i - 1] == s2[j - 1]) {
				d[i + 1][j + 1] = d[i][j] + 1;
				mmax = max(mmax, d[i][j] + 1);
			}
			else if (s1[i] == s2[j] && s1[i - 1] != s2[j - 1]) {
				d[i + 1][j + 1] = 1;
				mmax = max(mmax, d[i][j] + 1);
			}
		}
	cout<<mmax;

	return 0;
}