#include <iostream>
#include <string>
using namespace std;
int lcs[101][101][101];
int mmax(int a, int b, int c) {
	if (a >= b && a >= c)
		return a;
	else if (b >= c && b >= a) 
		return b;
	else 
		return c;
}
int main() {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	for(int i=1;i<=s1.size();i++)
		for(int j=1;j<=s2.size();j++)
			for (int k = 1; k <= s3.size(); k++) {
				if (s1[i - 1] == s2[j - 1] &&  s1[i-1] == s3[k - 1]) 
					lcs[i][j][k] = lcs[i - 1][j - 1][k - 1] + 1;
				else 
					lcs[i][j][k] = mmax(lcs[i - 1][j][k], lcs[i][j-1][k], lcs[i][j][k-1]);
			}
	cout << lcs[s1.size()][s2.size()][s3.size()];
	return 0;
}