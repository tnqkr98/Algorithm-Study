#include <iostream>
using namespace std;
int main() {
	int a, b, c,r=0; cin >> a >> b >> c;
	int s = (a + b + c) / 3;
	b += (c - s); r += (c - s);
	r += (b - s);
	cout << r;
	return 0;
}