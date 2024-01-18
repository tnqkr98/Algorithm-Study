#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	if (s[n - 1] == 'G') cout << s.substr(0,n - 1);
	else cout << s << "G";
	return 0;
}