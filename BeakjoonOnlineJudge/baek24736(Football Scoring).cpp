#include <iostream>
using namespace std;
int main() {
	int t, f, s, p, c,s1,s2;
	cin >> t >> f >> s >> p >> c;
	s1 = t * 6 + f * 3 + s * 2 + p + c * 2;
	cin >> t >> f >> s >> p >> c;
	s2 = t * 6 + f * 3 + s * 2 + p + c * 2;
	cout << s1 << " " << s2;
	return 0;
}