#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int min = a > b ? b : a;
	if (a != b) cout << min * 2 + 1;
	else cout << min * 2;
	return 0;
}