#include <iostream>
using namespace std;
int main() {
	double n; cin >> n;
	double mdl = (n* 1609.344) / 3.785411784;	// 1L에 몇 m 가는지
	cout.precision(9);
	cout << 100000 / mdl;

	return 0;
}