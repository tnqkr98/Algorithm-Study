#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n; cin >> n;
	double sum = 0;
	while (n--) {
		double l; cin >> l;
		sum += l * l * l;
	}
	cout.precision(19);
	cout<<pow(sum, 1. / 3.);
	return 0;
}