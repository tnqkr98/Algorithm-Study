#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
	double n; cin >> n;
	cout.precision(12);
	cout << 2 * sqrt(n / M_PI)*M_PI;
	return 0;
}