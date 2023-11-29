#include <iostream>
using namespace std;
int main() {
	int n = 0,c =0;
	string s; cin >> s;
	while (1) {
		n = s.find("DKSH", n);
		if (n != -1) {
			c++;
			n += 1;
		}
		else break;
	}
	cout << c;
	return 0;
}