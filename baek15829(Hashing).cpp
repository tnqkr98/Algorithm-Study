#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	long long res=0,t;
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		t = s[i] - 'a' + 1;
		for (int j = 0; j < i; j++) {
			t *= 31;
			t %= 1234567891;
		}
		res += t;
		res %= 1234567891;
	}
	cout << res;

	return 0;
}