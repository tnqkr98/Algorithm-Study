#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	if (n % 8 == 1) cout << 1;
	if (n % 8 == 2) cout << 2;
	if (n % 8 == 3) cout << 3;
	if (n % 8 == 4) cout << 4;
	if (n % 8 == 5) cout << 5;
	if (n % 8 == 6) cout << 4;
	if (n % 8 == 7) cout << 3;
	if (n % 8 == 0) cout << 2;


	return 0;
}