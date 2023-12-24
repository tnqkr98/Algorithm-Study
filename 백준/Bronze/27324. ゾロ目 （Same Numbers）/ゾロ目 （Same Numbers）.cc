#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	if (n % 10 == n / 10) cout << 1;
	else cout << 0;
	return 0;
}