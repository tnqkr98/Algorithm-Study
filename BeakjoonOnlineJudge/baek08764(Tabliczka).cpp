#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a > b && a % 2 == 0) 
		cout << 0;
	else if (a > b && a % 2 != 0) cout << b;
	else if (a < b && b % 2 == 0) cout << 0;
	else if (a < b && b % 2 != 0) cout << a;
	else if (a == b && a % 2 == 0) cout << 0;
	else cout << a;


	return 0;
}