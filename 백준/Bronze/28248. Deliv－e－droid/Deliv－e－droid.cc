#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	cout << a * 50 - b * 10 + (a > b ? 500 : 0);

	return 0;
}