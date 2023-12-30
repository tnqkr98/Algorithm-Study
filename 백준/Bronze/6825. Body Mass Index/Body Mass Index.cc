#include <iostream>
using namespace std;
int main() {
	double a, b; cin >> a >> b;
	double c = a / (b * b);
	if (c > 25) cout << "Overweight";
	else if (c > 18.5 && c <= 25) cout << "Normal weight";
	else cout << "Underweight";
	return 0;
}