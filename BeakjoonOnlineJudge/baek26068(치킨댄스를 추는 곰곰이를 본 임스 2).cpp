#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	int e = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int c =stoi(s.substr(2));
		if (c <= 90)e++;
	}
	cout << e;
	return 0;
}