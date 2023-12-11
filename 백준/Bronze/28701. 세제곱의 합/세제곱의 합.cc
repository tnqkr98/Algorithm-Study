#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	long long s1=0, s2 = 0;
	for (int i = 1; i <= n; i++) {
		s1 += i;
		s2 += i * i * i;
	}
	cout << s1 << endl;
	cout << s1 * s1 << endl;
	cout << s2;
	return 0;
}