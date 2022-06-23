#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b != c)cout << "C";
	else if (a == c && b != c)cout << "B";
	else if (c == b && a != c)cout << "A";
	else cout << "*";
	return 0;
}