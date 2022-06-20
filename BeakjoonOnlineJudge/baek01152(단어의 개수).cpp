#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size()-1; i++) 
		if (s[i]!=' ' && s[i+1] == ' ') n++;
	if (s[s.size() - 1] != ' ') cout << n + 1;
	else cout << n;
	return 0;
}