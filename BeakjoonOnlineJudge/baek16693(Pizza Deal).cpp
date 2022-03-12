#include <iostream>
# define PI 3.14159265358979323846
using namespace std;
int main() {
	double a1, p1, r1, p2; cin >> a1 >> p1 >> r1 >> p2;
	double d1, d2;
	d1 = a1 / p1;
	d2 = (r1 * r1* PI)/p2;
	if (d1 > d2) cout << "Slice of pizza";
	else cout << "Whole pizza";
	return 0;
}