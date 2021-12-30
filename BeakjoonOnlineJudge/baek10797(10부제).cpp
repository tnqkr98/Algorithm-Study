#include <iostream>
using namespace std;
int main() {
	int t,c,s=0;
	cin >> t;
	for (int i = 0; i < 5; i++) {
		cin >> c;
		if (t == c)
			s++;
	}
	cout << s;
	return 0;
}