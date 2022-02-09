#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int c, d;
	c = a + b; d = a - b;
	if (c > d)cout << c << endl << d;
	else cout << d<<endl << c;


	return 0;
}