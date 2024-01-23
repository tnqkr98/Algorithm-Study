#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double n, a, b; cin >> n >> a >> b;
	cout << ceil(n / (b - a));
	return 0;
}