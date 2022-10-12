#include <iostream>
#include <string>
using namespace std;
int main() {
	int a, b,c; cin >> a >> b>>c;
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		string s = to_string(i);
		for (auto d : s) {
			if (d - '0' == c)cnt++;
		}
	}
	cout << cnt;
	return 0;
}