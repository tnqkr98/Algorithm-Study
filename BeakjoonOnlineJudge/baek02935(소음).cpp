#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1, s2;
	char s;
	cin >> s1 >> s >> s2;
	if (s == '*') {
		cout << 1;
		for (int i = 1; i < s1.size() + s2.size() - 1; i++)
			cout << 0;
	}
	else {
		if (s1 == s2) {
			cout << 2;
			for (int i = 1; i < s1.size(); i++) cout << 0;
			return 0;
		}
		cout << 1;
		int big = s1.size() > s2.size() ? s1.size() : s2.size();
		int small = s1.size() > s2.size() ? s2.size() : s1.size();
		for (int i = 1; i < big; i++) {
			if (i == big - small) cout << 1;
			else cout << 0;
		}
	}
	return 0;
}