#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int u = -1,f=s.size();
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'U' && u== -1) {
			u = i;
		}

		if (s[i] == 'F') {
			f = i;
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (i == u) {
			cout << 'U';
		}
		else if(i<u && u!=-1) {
			cout << '-';
		}
		else if (i > u && i < f) {
			cout << 'C';
		}
		else if (i == f) {
			cout << 'F';
		}
		else if (i > f) {
			cout << '-';
		}
	}

	return 0;
}