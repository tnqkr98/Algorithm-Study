#include <iostream>
using namespace std;
int main() {
	int s1,s2=0; cin >> s1;
	for (int i = 0; i < 9; i++) {
		int t; cin >> t;
		s2 += t;
	}
	cout << s1 - s2;

	return 0;
}