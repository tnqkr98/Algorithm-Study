#include <iostream>
using namespace std;
int main() {
	int n, c = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s.find("01") != -1 || s.find("OI") != -1) c++;
	}
	cout << c;
	return 0;
}