#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		if (s[s.size() - 1] == '0' || s[s.size() - 1] == '2' || s[s.size() - 1] == '4' || s[s.size() - 1] == '6' || s[s.size() - 1] == '8')
			cout << "even" << endl;
		else cout << "odd" << endl;
	}

	return 0;
}