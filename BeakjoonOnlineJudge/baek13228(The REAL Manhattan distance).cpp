#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a1, a2, a3, b1, b2, b3; 
		cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
		cout << abs(a1 - b1) + abs(a2 - b2) + a3 + b3<<endl;
	}
	return 0;
}