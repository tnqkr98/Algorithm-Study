#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n; cin.ignore();
	for (int i = 0; i < n; i++) {
		string s; 
		getline(cin, s);
		if (s[s.length() - 1] != '.')cout << s << '.' << endl;
		else cout << s << endl;
	}
	return 0;
}