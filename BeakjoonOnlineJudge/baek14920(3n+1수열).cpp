#include <iostream>
using namespace std;
int main() {
	int c; cin >> c;
	int n = 1;
	while (1) {
		if (c == 1) break; 
		if (c % 2 == 0) c /= 2;
		else c = c * 3 + 1;
		n++;
	}
	cout << n;
	return 0;
}