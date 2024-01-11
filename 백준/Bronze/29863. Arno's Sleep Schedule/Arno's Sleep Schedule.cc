#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a <= 3) a += 24;
	b += 24;
	cout << b - a;


	return 0;
}