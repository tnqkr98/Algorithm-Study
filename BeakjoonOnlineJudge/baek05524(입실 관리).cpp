#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (auto c : s) 
			cout << (char)tolower(c);
		cout << endl;
	}
	return 0;
}