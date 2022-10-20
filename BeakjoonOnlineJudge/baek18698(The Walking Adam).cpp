#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		int c = 0;
		string s; cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'U')
				c++;
			else break;
		}
		cout << c << endl;
	}

	return 0;
}