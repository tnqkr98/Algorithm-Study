#include <iostream>
#include <string>
using namespace std;
int main() {
	string s,t; cin >> s;
	t = s;
	for(int i=0;i<4;i++) s.push_back('0');
	int j = s.size() - 1,carry=0;
	for (int i = t.size() - 1; i >= 0; i--) {
		if ((t[i] - '0') + (s[j] - '0') + carry == 3) {
			carry = 1;
			s[j] = '1';
		}
		else if ((t[i] - '0') + (s[j] - '0') + carry == 2) {
			carry = 1;
			s[j] = '0';
		}
		else if((t[i] - '0') + (s[j] - '0') + carry == 1){
			carry = 0;
			s[j] = '1';
		}
		else {
			carry = 0;
			s[j] = '0';
		}
		j--;
	}
	while (j>=0) {
		if ((s[j] - '0') + carry == 2) {
			s[j] = '0';
			carry = 1;
		}
		else if ((s[j] - '0') + carry == 1) {
			s[j] = '1';
			carry = 0;
		}
		else
			carry = 0;
		j--;
	}
	if (carry) cout << 1;
	cout<< s;
	return 0;
}