#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s[(s.size()-1) / 2] == s[(s.size()-1) / 2+1]) cout << "Do-it" << endl;
		else cout << "Do-it-Not" << endl;
	}
	return 0;
}