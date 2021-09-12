#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long long karr[10][2],narr[10][2];
int main() {
	long long n, k, knum, nnum, nsize=0, cur;
	cin >> n >> k;
	karr[1][0] = narr[1][0] = 1;
	karr[1][1] = narr[1][1] = 9;
	for (int i = 2; i <= 9; i++) {
		long long num = i * (9 * pow(10, i - 1));
		karr[i][0] = karr[i-1][1] + 1;
		karr[i][1] = karr[i][0] + num - 1;
		narr[i][0] = pow(10, i - 1);
		narr[i][1] = pow(10, i)-1;
	}
	for (int i = 1; i <= 9; i++) {
		if (k >= karr[i][0] && k <= karr[i][1])	knum = i;
		if (n >= narr[i][0] && n <= narr[i][1]) nnum = i;
	}
	for (int i = 1; i < nnum; i++) 
		nsize += (narr[i][1] - narr[i][0] + 1)*i;
	nsize += (n - narr[nnum][0] + 1)*nnum;

	if (k > nsize) cout << -1;
	else {
		k -= karr[knum][0];
		cur = pow(10, knum - 1) + k / knum;
		string s = to_string(cur);
		cout << s[k%knum];
	}
	return 0;
}