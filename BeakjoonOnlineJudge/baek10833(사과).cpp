#include <iostream>
using namespace std;
int main() {
	int n,s=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		s += b % a;
	}
	cout << s;
	return 0;
}