#include <iostream>
#include <string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		cout << "String #" << i + 1 << endl;
		for (int j = 0; j < s.size(); j++) {
			if (s[i] == 'Z') {
				cout << 'A';
				continue;
			}
			cout << (char)(s[j] +1);
		}
		cout << endl<<endl;
	}
	return 0;
}