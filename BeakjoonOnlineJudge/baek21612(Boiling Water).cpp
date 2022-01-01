#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	n = n * 5 - 400;
	cout << n<< endl;
	if (n == 100) cout << 0;
	else if (n > 100) cout << -1;
	else cout << 1;

	return 0;
}