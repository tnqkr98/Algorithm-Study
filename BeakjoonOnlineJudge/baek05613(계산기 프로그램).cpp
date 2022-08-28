#include <iostream>
#include <string>
using namespace std;
int main() {
	int sum = 0, save = 0;
	cin >> sum;
	while (1) {
		string s; cin >> s;
		if (s[0] == '=') {
			cout << sum;
			break;
		}
		else if(s[0]>='0' && s[0] <='9')
			save = stoi(s);
		else {
			int n; cin >> n;
			switch (s[0]) {
			case '+':sum += n; break;
			case '-':sum -= n; break;
			case '*':sum *= n; break;
			case '/':sum /= n; break;
			}
		}
	}
	return 0;
}