#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,a=0,b=0; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') a++;
		else b++;
	}
	if (a > b) cout << "A";
	else if (a < b) cout << "B";
	else cout << "Tie";
	return 0;
}