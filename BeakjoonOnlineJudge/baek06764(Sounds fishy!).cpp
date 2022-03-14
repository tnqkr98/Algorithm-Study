#include <iostream>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	if (a > b > c > d) cout << "Fish Diving";
	else if (a < b < c < d)cout << "Fish Rising";
	else cout << "Constant Depth";


	return 0;
}