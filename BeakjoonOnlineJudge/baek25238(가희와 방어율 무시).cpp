#include <iostream>
using namespace std;
int main() {
	double a, b; cin >> a >> b;
	if (a - b * a / 100 >= 100) cout << 0;
	else cout << 1;



	return 0;
}