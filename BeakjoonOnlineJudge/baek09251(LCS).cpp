#include <iostream>
#include <string>
#define MAX(a,b) (((a)>(b))?(a):(b))
using namespace std;
int lcs[1001][1001];
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i <= s1.size(); i++) {
		for (int j = 0; j <= s2.size(); j++) {
			if (i == 0 || j == 0)
				lcs[i][j] = 0;
			else if (s1[i-1] == s2[j-1])
				lcs[i][j] = lcs[i-1][j-1]+1;
			else if (s1[i-1] != s2[j-1])
				lcs[i][j] = MAX(lcs[i - 1][j], lcs[i][j - 1]);
		}
	}
	cout << lcs[s1.size()][s2.size()];
	return 0;
}