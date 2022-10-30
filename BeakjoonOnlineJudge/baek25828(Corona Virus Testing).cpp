#include <iostream>
using namespace std;
int main() {
	int g, p, t; cin >> g >> p>> t;
	int sum = g + t * p;
	if (g * p < sum) cout << 1;
	else if (g * p > sum) cout << 2;
	else cout << 0;
	return 0;
}