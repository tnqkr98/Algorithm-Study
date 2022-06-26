#include <iostream>
#include <string>
using namespace std;
int alpha[26];
int main() {
	int n; cin >> n;
	string str; cin >> str;
	int s = 0, e = 1,cur=0,max=0;
	if (str.size() <=2) {
		cout << str.size();
		return 0;
	}
	alpha[str[s] - 'a']++;
	alpha[str[e] - 'a']++;
	if (str[0] != str[1]) cur = 2;
	else cur = 1;
	while (e < str.size()) {
		if (cur <= n) {
			if (e-s + 1 > max) max = e - s + 1;
			e++;
			if (e == str.size()) break;
			alpha[str[e] - 'a']++;
			if (alpha[str[e] - 'a'] == 1) cur++;
		}
		else {
			alpha[str[s] - 'a']--;
			if (alpha[str[s] - 'a'] == 0) cur--;
			s++;
		}
	}
	cout << max;
	return 0;
}