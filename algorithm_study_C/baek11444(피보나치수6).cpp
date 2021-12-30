#include <iostream>
#include <vector>
#define DIV 1000000007
using namespace std;
typedef vector<vector<long long>> VV;
VV f = { {1,1},{1,0} };
VV mul(VV a, VV b) {
	VV ret = vector<vector<long long>>(2,vector<long long>(2));
	ret[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0])%DIV;
	ret[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1])%DIV;
	ret[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0])%DIV;
	ret[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1])%DIV;
	return ret;
}
VV recur(long long n) {
	if (n == 1) 
		return f;
	if (n % 2 == 0) {
		VV val = recur(n / 2);
		return mul(val, val);
	}
	else
		return mul(recur(n-1),f);
}
int main() {
	long long n;
	cin >> n;
	if (n == 0) cout << 0;
	else if (n < 3) cout << 1;
	else {
		VV ret = recur(n);
		cout << ret[1][0];
	}
	return 0;
}