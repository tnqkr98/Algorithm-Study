#include <iostream>
using namespace std;
int main() {
	int n, a, b; cin >> n >> a >> b;
	if (b == a) cout << "Anything";
	else if (b > a) cout << "Bus";
	else cout << "Subway";
	return 0;
}