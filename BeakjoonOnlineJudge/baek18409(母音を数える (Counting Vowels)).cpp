#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,c=0;
	string s; cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'a' ||
			s[i] == 'i' ||
			s[i] == 'o' ||
			s[i] == 'e' ||
			s[i] == 'u')c++;
	}
	cout << c;
	return 0;
}