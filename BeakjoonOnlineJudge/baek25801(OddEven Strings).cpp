#include <iostream>
#include <string>
using namespace std;
int main() {
	int a[27] = { 0 };
	string s; cin >> s;
	for (auto c : s) 
		a[c - 'a']++;
	int e = 0, o = 0;
	for (int i = 0; i < 27; i++) {
		if (a[i] == 0) continue;
		if (a[i] % 2 == 0) {
			e++;
		}
		else {
			o++;
		}
	}
	if (e == 0) cout << 1;
	else if (o == 0) cout << 0;
	else cout << "0/1";
	return 0;
}